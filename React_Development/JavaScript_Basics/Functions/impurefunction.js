//An impure function is a function that may produce different outputs for the same input or has side effects (like modifying external variables or states).

// Example of an impure function
let counter = 0;
function incrementCounter(){
    counter++;
    console.log(counter);
}

incrementCounter(); // logs 1
incrementCounter(); // logs 2, modifies external variable 'counter'