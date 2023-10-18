const print=(message) => log(message, new Date())
const log=(message, timestamp) =>
console.log(`${timestamp.toString()}: ${message}`);
export default{print,log}


