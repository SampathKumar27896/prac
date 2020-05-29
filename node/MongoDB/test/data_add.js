const mocha = require('mocha');
const assert  = require('assert');
const marioChar = require('../models/marioChar');

//Describe tests 
describe('add_data_function', () => {

    //create tests 
    it('adds data to the database', (done) => {
        var char = new marioChar({
            name: 'mario',
            weight : 60
        })
        char.save().then(() => {
            assert(char.isNew === false)
            done();
        })
    });
});