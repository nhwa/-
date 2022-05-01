const readline = require('readline')

const rl = readline.createInterface({
  input: process.stdin,
  output: process.stdout,
})



rl.on("line", (line) => {

  // let input = line.split('\n')

  // let num1 = Number(input[0].split(' ')[0])
  // let num2 = Number(input[0].split(' ')[1])
  // let num3 = Number(input[1])

  let input = line.split(' ')

  let num1 = Number(input[0])
  let num2 = Number(input[1])
  let num3 = Number(input[2])

  let plus = num2 + num3


  if(plus > 60){
    M = Math.floor(plus % 60)
    H = Math.floor((plus / 60) + num1)

    if(H >= 24){
      H = H - 24 
    }

    console.log(H, M)
  } else {
    M = plus
    H = num1

    console.log(H, M)
  }

  

 
})


rl.on('close', () => {
  process.exit();
})








