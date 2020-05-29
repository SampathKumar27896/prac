/*
 *  create an instance of the router
 *
 *  attacht the routes and export it 
*/
const router = require('express').Router();
const passport = require('passport');


//auth login, render login view 
router.get('/login', (req, res) => {
    res.render('login');
});

//auth logout 
router.get('/logout', (req, res) => {
    //handling with passport 
    res.send('logging out')
})

//auth with google
router.get('/google', passport.authenticate('google', {
    scope : ['profile']
}));

//redirect uri 
router.get('/google/redirect', passport.authenticate('google'), (req, res) => {
    res.send('Reached the redirect uri')
});


//export
module.exports = router;