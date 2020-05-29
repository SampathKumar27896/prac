const http = require('http');
const Sequelize = require('sequelize');
const hostname = '172.23.0.3';
const port = 3000;

const server = http.createServer((req, res) => {
  res.statusCode = 200;
  res.setHeader('Content-Type', 'text/plain');
  res.end('Hello World.');   
});

//Connecting to the database 
const sequelize = new Sequelize(
  'demo','demo','Admin@123',
  {
    host : '172.23.0.2',
    dialect : 'mysql'
  }
)

sequelize
  .authenticate()
  .then(() => {
    console.log('Connection has been established successfully.');
  })
  .catch(err => {
    console.error('Unable to connect to the database:', err);
  });

server.listen(port, hostname, () => {
  console.log(`Server running at http://${hostname}:${port}/`);
});