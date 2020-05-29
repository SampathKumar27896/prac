const mongoose = require('mongoose');


//connect to the db before the tests run 
before((done) => {
    //connect to mongo db 
    mongoose.connect('mongodb+srv://admin:Admin123@samplecluster-6qvyn.mongodb.net/demo?retryWrites=true&w=majority');

    mongoose.connection.once('open', () => {
        console.log('Connection made...');
        done();
    }).on('error', (error) => {
        console.log('Connection error..' + error);
    });
})


//Before each test case runs 
beforeEach((done) => {
    //Drop collection 
    mongoose.connection.collections.mariochars.drop(() => {
        done();
    });
});