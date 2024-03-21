const Web3 = require('web3');
const web3 = new Web3('YOUR_ETHEREUM_NODE_URL'); // Replace with an Ethereum node URL

const contractAddress = 'CONTRACT_ADDRESS'; // Replace with the deployed contract address
const contractABI = [
  // Paste the ABI of your contract here
];

const contract = new web3.eth.Contract(contractABI, contractAddress);

const ownerAddress = 'OWNER_ADDRESS'; // Replace with the owner's Ethereum address
const recipientAddress = 'RECIPIENT_ADDRESS'; // Replace with the recipient's Ethereum address

async function sendPayment(amount, currency) {
  try {
    const gas = await contract.methods.sendPayment(recipientAddress, amount, currency).estimateGas();
    const gasPrice = await web3.eth.getGasPrice();

    const data = contract.methods.sendPayment(recipientAddress, amount, currency).encodeABI();
    const nonce = await web3.eth.getTransactionCount(ownerAddress);

    const tx = {
      from: ownerAddress,
      to: contractAddress,
      gas,
      gasPrice,
      data,
      nonce,
    };

    const signedTx = await web3.eth.accounts.signTransaction(tx, 'PRIVATE_KEY'); // Replace with the owner's private key
    const receipt = await web3.eth.sendSignedTransaction(signedTx.rawTransaction);

    console.log('Payment sent:', receipt);
  } catch (error) {
    console.error('Error sending payment:', error);
  }
}

// Example usage
sendPayment(0.1, 'ETH');
