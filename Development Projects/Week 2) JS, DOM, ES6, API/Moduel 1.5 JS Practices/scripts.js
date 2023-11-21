// // web browser  
// let n = prompt("Give the input");


// // compiler input 
// const readline = require('readline');

// const rl = readline.createInterface({
//     input: process.stdin,
//     output: process.stdout  
// });

// rl.question('Enter numbers separated by spaces: ', (input) => {
//     const arrayInput = input.split(' ').map(Number);
//     console.log('Array:', arrayInput);
//     rl.close();
// });

// const prompt = require("prompt-sync")({ sigint: true });
// const name = prompt("Give the arry input? ");
// console.log(`You are ${name} years old.`);





// For this you must need to install this package npm install prompt-sync

// This for take input form the terminal in string 
// const prompt = require("prompt-sync")({ sigint: true });

// // Ask the user for array input
// const input = prompt("Enter array elements separated by spaces: ");

// // Split the input string into an array
// const array = input.split(' ');

// // Print the resulting array
// console.log("Entered array:", array);

// This for take inpu form teh terminal in integer
// const prompt = require("prompt-sync")({ sigint: true });

// // Ask the user for array input
// const input = prompt("Enter array elements separated by spaces: ");

// // Split the input string into an array
// const stringArray = input.split(' ');

// // Convert each element to an integer using map and parseInt
// const intArray = stringArray.map(element => parseInt(element, 10));

// Print the sum array of integers
// let sumoftheArray = 0; 
// for(let i = 0; i < intArray.length; i++){
//     sumoftheArray += intArray[i];
// }

// console.log(sumoftheArray);

// Print the Odd and even array of integers
// for (let i = 0; i < intArray.length; i++) {
//     if(intArray[i] % 2 == 0){
//         console.log("Even: ",intArray[i]);
//     }else{
//         console.log("Odd: ",intArray[i]);
//     }
// }

// In here we will see the how can we find the max var in the array
// function find_the_Maximum(){
//     const prompt = require("prompt-sync")({ sigint: true });

// // Ask the user for array input
// const input = prompt("Enter array elements separated by spaces: ");

// // Split the input string into an array
// const stringArray = input.split(' ');

// // Convert each element to an integer using map and parseInt
// const intArray = stringArray.map(element => parseInt(element, 10));
//     let minvalue = -1e9+7;
// let maximum_value = minvalue;

// for (let i = 0; i < intArray.length; i++) {
//     const element = intArray[i];

//     if(element > maximum_value){
//         maximum_value = element;
//     }
// }
// console.log(maximum_value);
// } 

// find_the_Maximum();\



// Reverse the string 


// function Reverse() {
//     const prompt = require("prompt-sync")({ sigint: true });
//     var name = prompt("Give Stirng input : ");
//     reverseStirng = '';
//     for(let i = name.length - 1; i >= 0; i--){
//         reverseStirng+= name[i];
//     }
//     return reverseStirng;
// }
// console.log(Reverse());

// say YES to Prime   
function Prime(){
    const prompt = require("prompt-sync")({ sigint: true});
    let number = prompt("Give the number: ");

    let intnumber = parseInt(number,10);
    var flag = false;
    for (let i = 2; i < intnumber - 1; i++) {
        if(intnumber % i == 0){
            flag = true;
        }
    }
    if(flag){
        console.log("NO");
    }
    else{
        console.log("YES");
    }
}

Prime();

