const Web3 = require('web3');
const web3 = new Web3('https://mainnet.infura.io/v3/YOUR_INFURA_PROJECT_ID'); // You'll need to obtain an Infura project ID.

const blockHash = '0x0d8354473582e24a71f61f4D9bFda41ca1f94b1e';

web3.eth.getBlock(blockHash)
  .then((block) => {
    console.log('Block Information:', block);
  })
  .catch((error) => {
    console.error('Error:', error);
  });