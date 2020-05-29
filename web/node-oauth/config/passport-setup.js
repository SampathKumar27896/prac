const passport = require('passport');
const googleStrategy = require('passport-google-oauth20');
const constant = require('./../constants/constant');
const User = require('../models/user');

 /*
  *
   access token given by google
   access token expires after certain amount of time, we need refresh token 
   profile information got from google
   done - is the callback function called when all the process are done
   passport callback function  
*/
passport.use(new googleStrategy({
        //options for the strategy
        callbackURL : constant.google.callbackURL,
        clientID : constant.google.clientID,
        clientSecret : constant.google.clientSecret
    }, (accessToken, refreshToken, profile, done) => {
        
        console.log('reached redirect uri');
        console.log(profile);
        let result = new User({
            googleId: profile.id,
            username: profile.displayName
        }).save((error) => {
            console.log(error); 
        });
        console.log(result);
    })
)