export const print=(message) => log(message, new Date()) //individual export
export const log=(message, timestamp) =>
console.log(`${timestamp.toString()}: ${message}`)


/*
// Export all at once

const print=(message) => log(message, new Date()) 
const log=(message, timestamp) =>
console.log(`${timestamp.toString()}: ${message}`)

export {print,log};
*/

