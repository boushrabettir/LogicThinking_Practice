const express = require('express');
const { appendFile } = require('fs');
const mg = require('morgan');

const server = express();

server.set('view engine', 'ejs');
server.use(express.static('public'));
server.use(express.urlencoded({ extended: true })); // do i even need this?
server.use(mg('tiny'));

server.listen(3000);

server.get('/', (req, res) => {
  res.render('index');
});

server.get('/views/mainpage.ejs', (req, res) => {
  res.render('mainpage');
});
