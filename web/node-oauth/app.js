//include express
const express = require('express');
const authRoutes = require('./routes/auth-routes');
const app = express();
const passportSetup = require('./config/passport-setup');
const mongoose = require('mongoose');
const constant = require('./constants/constant');
//set up view engine 
app.set('view engine','ejs');

//connect to mongo db 
mongoose.connect(constant.mongoDB.dbURI, () => {
    console.log('Connected to mongo DB');
})

//setup routes 
app.use('/auth',authRoutes);

//routes
app.get('/', (req, res) => {
    res.render('home');
});

app.listen(3000, () => {
    console.log('App is now listening to port 3000');
})