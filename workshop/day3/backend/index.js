const express = require('express');
const all_routes = require('./all_routes');
const { Movie } = require('./all_schemas');
const app = express();

app.use(all_routes);

// all_routes.get('/', (req, res)=>{
//     console.log("Reached root");
//     res.send("Reached root");
// })
app.listen(4000,()=>{
    console.log("Server is up at port 4000");
})