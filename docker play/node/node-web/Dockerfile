FROM  node:12.16.1

WORKDIR /usr/src/app

COPY package*.json ./
RUN npm install -g nodemon
RUN npm install 

COPY . .

EXPOSE 3000
CMD ["npm","run", "dev"]

