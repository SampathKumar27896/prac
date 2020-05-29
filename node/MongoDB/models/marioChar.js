const mongoose = require('mongoose');
const Schema = mongoose.Schema;

//create schema and model 
const MarioCharSchema = new Schema({
    name: String,
    weight: Number
});

const marioChar = new mongoose.model('mariochar',MarioCharSchema);

module.exports = marioChar;