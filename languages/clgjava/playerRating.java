public class playerRating {
    int playerPos;
    String PlayerName;
    float c1R;
    float c2R;
    float c3R;
    float avgR;
    char cat;
    playerRating(int playerPos,String PlayerName)
    {
        this.PlayerName=PlayerName;
        this.playerPos=playerPos;

    }
    void calAvgRating(float c1R,float c2R)
    {
        avgR=(c1R+c2R)/2;

    }
    
    void calAvgRating(float c1R,float c2R,float c3R)
    {
        avgR=(c1R+c2R+c3R)/3;

    }
    void calCat()
    {
        if(avgR>8)
        {
            cat='A';
            
        }
        else if(avgR>5 && avgR<8)
        {
            cat='B';
        }
        else if(avgR>0 && avgR<=5)
        {
            cat='C';
        }

    }
    void display()
    {
        System.out.println("the name of player is "+PlayerName);
        System.out.println("the position of player is "+playerPos);
        System.out.println("the avgRating of player is "+avgR);
        System.out.println("the category of player is "+cat);
    }
    

}
class pRmain
{
    public static void main(String[] args) {
        playerRating p=new playerRating(1,"Oscar" );
        // p.c1R=1;
        // p.c2R=1;
        // p.c3R=1;
        p.calAvgRating(1,1,1);
        p.calCat();
        p.display();

    }
}