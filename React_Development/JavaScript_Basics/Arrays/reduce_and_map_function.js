//Map function is used to create a new array by applying a function to each element of the original array.
//Reduce function is used to reduce an array to a single value by applying a function to each element of the array and accumulating the result.
let numbers = [1,2,3,4,5];
let doubled = numbers.map(num=>num*2);
console.log(doubled);
let sum = numbers.reduce((acc,curr)=>acc+curr,0);
console.log(sum)
let sum2= numbers.reduce(function(acc,curr){
    return acc+curr;
},0);
console.log("sum1: ", sum+" \nsum2: ", sum2);