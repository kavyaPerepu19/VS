const axios = require('axios');
const cheerio = require('cheerio');

// URL of the webpage you want to scrape
const url = 'https://ums.osmania.ac.in/';

// Make an HTTP GET request to the URL
axios.get(url)
  .then((response) => {
    if (response.status === 200) {
      // Load the HTML content of the page into Cheerio
      const $ = cheerio.load(response.data);

      // Define the CSS selector for the elements you want to scrape
      const articleTitles = [];

      // Use Cheerio to extract data
      $('.article-title').each((index, element) => {
        articleTitles.push($(element).text());
      });

      // Print the scraped data
      console.log('Scraped Article Titles:');
      console.log(articleTitles);
    } else {
      console.error('Failed to retrieve the webpage');
    }
  })
  .catch((error) => {
    console.error('Error:', error);
  });