const { MongoClient, ServerApiVersion } = require('mongodb');
const uri = "mongodb+srv://sarojasreenidhi:sreenidhiMongodb@cluster0.fmwajps.mongodb.net/?retryWrites=true&w=majority&appName=Cluster0";

// Create a MongoClient with a MongoClientOptions object to set the Stable API version
const client = new MongoClient(uri, {
  serverApi: {
    version: ServerApiVersion.v1,
    strict: true,
    deprecationErrors: true,
  }
});

async function run() {
  try {
    // Connect the client to the server	(optional starting in v4.7)
    await client.connect();
    // Send a ping to confirm a successful connection
    await client.db("admin").command({ ping: 1 });
    console.log("Pinged your deployment. You successfully connected to MongoDB!");
        // database and collection code goes here
        const db = client.db("sample_guides");
        const coll = db.collection("comets");
        // insert code goes here
        const docs = [
          {name: "sreenidhi", age: 19},
          {name: "pqr", age: 20},
          {name: "xyz", age: 21},
        ];
        const result = await coll.insertMany(docs);
        // display the results of your operation
        console.log(result.insertedIds);
} 
  finally {
    // Ensures that the client will close when you finish/error
    await client.close();
  }
}
run().catch(console.dir);