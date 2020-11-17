#!/usr/bin/node

/* prints all characters of a Star Wars movie:

The first argument is the Movie ID - example: 3 = “Return of the Jedi”
Display one character name by line in the same order of the list “characters” in the /films/ response
You must use the Star wars API
You must use the module request
*/

const request = require('request');
const url = 'https://swapi-api.hbtn.io/api/films/' + process.argv[2];

function makeRequest (url) {
  return new Promise(function (resolve, reject) {
    request(url, function (error, response, body) {
      if (!error && response.statusCode === 200) {
        resolve(body);
      }
      reject(error);
    });
  });
}
/* make use of async and await to process request
https://developer.mozilla.org/en-US/docs/Web/JavaScript/Reference/Operators/await
https://www.geeksforgeeks.org/how-to-make-javascript-wait-for-a-api-request-to-return/
*/
request(url, async function (error, response, body) {
  if (!error && response.statusCode === 200) {
    const characters = JSON.parse(body).characters;
    for (const character of characters) {
      const charinfo = await makeRequest(character);
      console.log(JSON.parse(charinfo).name);
    }
  }
});
