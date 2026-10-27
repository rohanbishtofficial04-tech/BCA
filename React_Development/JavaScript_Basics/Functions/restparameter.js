//rest parameter is a feature in JavaScript that allows a function to accept an indefinite number of arguments as an array. It is denoted by three dots (...) followed by the name of the parameter.

// Example of using rest parameter
function sum(...numbers) {
    return numbers.reduce((acc, curr) => acc + curr, 0); //reduce method is used to sum up all the numbers in the array
    //acc is the accumulator that holds the sum of the numbers, and curr is the current number being processed in the array. The initial value of acc is set to 0.
}

//sum using for each loop
function sumUsingForEach(...numbers) {
    let total = 0;
    numbers.forEach(num => {
        total += num; //for each number in the array, add it to the total
    });
    return total;
}

// Using reduce method to sum the numbers
let result = sum(1, 2, 3, 4, 5); // returns 15
console.log(result); // logs 15

//using for each loop to sum the numbers
let result2 = sumUsingForEach(1, 2, 3, 4, 5); // returns 15
console.log(result2); // logs 15


// Another example of using rest parameter
function multiply(multiplier, ...numbers) {
    return numbers.map(num => num * multiplier); //map transforms each element of the array by multiplying it with the multiplier
}

let multipliedResult = multiply(2, 1, 2, 3); // returns [2, 4, 6]
console.log(multipliedResult); // logs [2, 4, 6]




