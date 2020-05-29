const  http = require('http')

const hostname = '127.0.0.1'
const port = process.env.PORT || 3000

//creating new http server and returns it 
/*
request event is called req and response object is created
http.IncomingMessage http.ServerResponse

**/ 
const server = http.createServer( (req, res) => {
    //Indicating the successful response 
    res.statusCode = 200
    //Setting the content type of the response 
    res.setHeader('Content-Type', 'text/plain')
    //Closing the response 
    res.end('Hello Wolrd!\n')
})

//when the server is ready, the callback function is called 
server.listen(port, hostname, () => {
    console.log(`Server runningat http://${hostname}:${port}/`)
})