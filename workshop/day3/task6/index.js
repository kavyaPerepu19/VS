let express = require('express');
let app = express();
// mongoose package helps us in connecting to mongo db
let mongoose = require('mongoose');

// use mongoose to connect to mongodb
//connection string andd dbname
let db = async () => {
     try{ 
        await mongoose.connect("mongodb+srv://pkks:welcome2024@mycluster.5dby58b.mongodb.net/workshop?retryWrites=true&w=majority&appName=myCluster");
        console.log("connected to  db");
     }
     catch(err) {
        console.log('there was an error');
        console.log(err);
     }
}
db();

// have a default route for root
app.get('/',(req,res) => {
    console.log(" req for root /");    
    res.send(" req for root /")    
});

let userSchema = new mongoose.Schema({
    name: {
        type:String,
        require: true
    }
});
let newSchema=new mongoose.Schema({
    name: {
        type:String,
        require: true
    }
});
//create a model
let User = mongoose.model('users',userSchema);
let New = mongoose.model('new',newSchema);

//using model fetch data, add users route
app.get('/users',async (req,res) => {
    console.log(" get on users");
    let data = await User.find({})
    console.log(data);
    res.send(data);
});
app.get('/new',async (req,res) => { 
    console.log(" get on new");
    let data = await New.find({})
    console.log(data);
    res.send(data);
});

app.listen(4000, () => { console.log(" server listening at port 4000") });