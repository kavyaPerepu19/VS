let express=require('express');
app=express();
let port = 5000;
app.get('/',(req,res)=>{
    res.send("<h1>helooooooooooooooooooooooooooooooo</h1>");
})
app.get('/houses',(req,res) =>{
    res.send("<h1>reached houses</h1>")
})
app.get('/houses/:id',(req,res)=>{
    res.send("reached /houses/id");
})
app.post('/login',(req,res)=>{res.send("reached login")})
app.listen(port,()=>console.log('app is running'))

