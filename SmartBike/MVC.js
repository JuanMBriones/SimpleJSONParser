
require('wcpp')

const ourModule = require('./caller.cpp')

console.log(ourModule.call())
