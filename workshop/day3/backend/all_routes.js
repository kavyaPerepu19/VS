const express = require('express')
const all_routes = express.Router()
all_routes.get('/',(req,res)=>{
    console.log("in all_routes/root")
    res.send("Welcome to backend service")
})

all_routes.get('/houses/:id',(req,res)=>{
    console.log("in all_routes/houses/id")
    res.send("Welcome to house with id")
})

all_routes.post('/login',(req,res)=>{
    console.log("in all_routes/login")
    res.send("Welcome to login")
})

all_routes.post('/signUp',(req,res)=>{
    console.log("in all_routes/signUp")
    res.send("Welcome to SignUp")
})
module.exports=all_routes;