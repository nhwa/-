const readline = require('readline')

const rl = readline.createInterface({
  input: process.stdin,
  output: process.stdout,
})



rl.on("line", (line) => {

  let input = line.split(' ')

  let num1 = Number(input[0])
  let num2 = Number(input[1])
  let num3 = Number(input[2])

  if(num1 === num2 && num1 === num3 && num2 === num3){
    sum = num1 * 1000 + 10000
  } else if((num1 === num2 && num1 !== num3 && num2 !== num3) || (num2 === num3 && num2 !== num1 && num3 !== num1) || (num1 === num3 && num1 !== num2 && num3 !== num2)){
    if(num1 === num2){
      sum = num1 * 100 + 1000
    } else if(num2 === num3){
      sum = num2 * 100 + 1000
    } else if(num1 === num3){
      sum = num2 * 100 + 1000
    }
  } else {
    if(num1 > num2 && num1 > num3){
      sum = num1 * 100
    } else if(num2 > num1 && num2 > num3){
      sum = num2 * 100
    } else if(num3 > num1 && num3 > num2){
      sum = num3 * 100
    }
  }

  console.log(sum)
 
})


rl.on('close', () => {
  process.exit();
})








