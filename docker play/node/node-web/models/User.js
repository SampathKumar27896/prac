import { Sequelize } from "sequelize/types";

class User extends Model {}

User.init({
    id : { 
        type : Sequelize.INTEGER,
        primaryKey : true,
        autoIncrement : true

    },
    first_name : {
        type : Sequelize.STRING,
        allowNull : false
    },
    last_name : {
        type : Sequelize.STRING,
        allowNull : false
    },
    email_id : {
        type : Sequelize.STRING,
        allowNull : false
    },
    password : {
        type : Sequelize.STRING,
        allowNull : false
    },
    created_at : {
        type : Sequelize.NOW
    },

    updated_at : {
        type : Sequelize.NOW
    }


});