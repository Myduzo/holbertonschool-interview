#!/usr/bin/node
const request = require('request');
const url = 'https://swapi-api.hbtn.io/api/films/' + process.argv[2];

request(url, async function (err, res, body) {
  if (err) return console.error(err);

  const jsonData = JSON.parse(body).characters;
  for (const dataURL of jsonData) {
    await new Promise((resolve, reject) => {
      request(dataURL, (err, res, body) => {
        if (err) return console.error(err);
        console.log(JSON.parse(body).name);
        resolve();
      });
    });
  }
});
