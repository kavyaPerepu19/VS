// SPDX-License-Identifier: UNLICENSED
pragma solidity ^0.8.9;

contract RealEstate {
    struct Property{
        uint256 propertyID;
        address owner;
        uint256 price;
        string propertyTitle;
        string category;
        string images;
        string propertyAddress;
        string description;
        address [] revieweers;
        string [] comment;
    }
    mapping(uint256 => Property) private properties;
    uint256 public propertyIndex;
    event PropertyListed(uint256 indexed id, address indexed owner, uint256 price);
    event PropertySold(uint256 indexed id, address indexed  oldowner, address indexed newowner, uint256 price );
    event PropertyResold( uint256 indexed id, address indexed oldowner, uint256 indexed newowner, uint256 price );
    
    struct Review{
        address reviewer;
        uint256 propertyId;
        uint256 rating;
        string comment;
        uint256 likes;
    }
    struct Product{
        uint256 propertyId;
        uint256 totalRating;
        uint256 numReviews;

    }

    mapping(uint256=>Review[]) private reviews;
    mapping(address => uint256[]) private userReviews;
    mapping(uint256 => Product) private products;
    uint256 public reviewsCounter;
    event ReviewAdded(uint256 indexed propertyId, address indexed reviewer,uint256 rating, string comment);
    event ReviewLiked(uint256 indexed propertyId,uint256 indexed reviewIndex, address indexed liker, uint256 likes);


    function updateProperty(address owner,uint256 propertyId,string memory _propertyTitle, string memory _images,string memory _description)external returns(uint256){
        Property storage property = properties[propertyId];
        require(property.owner==owner,"you are not the owner");
        property.images=_images;
        property.description=_description;
        property.propertyTitle=_propertyTitle;
        return propertyId;
    }

    function buyProperty(uint256 id, address buyer) external payable{
        uint256 amount = msg.value;
        require(amount >= properties[id].price, "Insufficient funds");
        Property storage property = properties[id];
        (bool sent,) = payable(property.owner).call{value: amount}("");
        if(sent){
            property.owner = buyer;
            emit PropertySold(id, property.owner, buyer, amount);
        }
            //shd add commission

    }
    function getAllProperties() public view returns(Property[] memory){
        uint256 itemCount = propertyIndex;
        uint256 currentIndex=0;

        Property[] memory items = new Property[](itemCount);
        for(currentIndex = 0; currentIndex < itemCount; currentIndex++){
            Property storage currentItem = properties[currentIndex];
            items[currentIndex]=currentItem;
        }
        return items;
    } 
    function getUserProperties(address user) external view returns (Property[] memory) {
        uint256 totalItems = propertyIndex;
        uint256 itemCount = 0;
        for (uint256 i = 0; i < totalItems; i++) {
            if (properties[i].owner == user) {
                itemCount += 1;
            }
        }
    
        Property[] memory userProperties = new Property[](itemCount);
    
        uint256 currentIndex = 0;
        for (uint256 i = 0; i < totalItems; i++) {
            if (properties[i].owner == user) {
                userProperties[currentIndex] = properties[i];
                currentIndex += 1;
            }
        }

    return userProperties;
    }
    function addReview(uint256 propertyId,uint256 rating,string calldata comment,address user)external{
        Property storage property=properties[propertyId];
        property.revieweers.push(user);
        property.comment.push(comment);
        reviews[propertyId].push(Review(user,propertyId,rating,comment,0));
        userReviews[user].push(propertyId);
        products[propertyId].totalRating +=rating;
        products[propertyId].numReviews++;
        emit ReviewAdded(propertyId,user,rating,comment);
        reviewsCounter++;

    }

    function getProductReviews(uint256 propertyId) external view returns(Review[] memory){
        return reviews[propertyId];
    }

    function getUserReviews(address user) external view returns (Review[] memory)
        {
            uint256 totalReviews = userReviews[user].length;
            Review[] memory userProductReviews = new Review[](totalReviews);
            for(uint256 i=0; i < userReviews[user].length; i++){
                uint256 productId = userReviews[user][i];
                Review[] memory productReviews = reviews[productId];
                for(uint256 j=0; j < productReviews.length; j++ ){
                    if(productReviews[j].reviewer == user){
                        userProductReviews[i] = productReviews[j];
                    }
                }
            }
            return userProductReviews;
        }

    function likeReview(uint256 property, uint256 reviewIndex, address user) external
    {
        Review storage review = reviews[property][reviewIndex];
        review.likes++;
        emit ReviewLiked(property, reviewIndex, user, review.likes);
    }

    function getHighestratedProduct() external view returns (uint256){
        uint256 highestRating = 0;
        uint256 highestRatedProductId = 0;
        for(uint256 i=0; i < reviewsCounter; i++){
            uint256 productId = i + 1;
            if(products[productId].numReviews > 0){
                uint256 avgRating = products[productId].totalRating / products[productId].numReviews;
                if(avgRating > highestRating){
                    highestRating = avgRating;
                    highestRatedProductId = productId;
                }
            }
        }
        return highestRatedProductId;
    }


    function getProperty(uint256 id) external view returns(uint256, address, uint256, string memory, string memory, string memory, string memory, string memory)
    {
        Property memory property = properties[id];
        return(
            property.propertyID,
            property.owner,
            property.price,
            property.propertyTitle,
            property.category,
            property.images,
            property.propertyAddress,
            property.description
        );
    } 
   
}
