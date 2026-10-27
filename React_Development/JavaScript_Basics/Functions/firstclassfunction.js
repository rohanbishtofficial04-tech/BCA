//first class function can be passed as an argument to another function, returned from a function, and assigned to a variable.

const firstClassFunction = function() {
  console.log("This is a first-class function");
};//we use const to declare the function because we don't want to reassign it later.
firstClassFunction();

//we can also pass the function as an argument to another function

function higherOrderFunction(callback) {
  console.log("Before calling the callback function");
  callback();
  console.log("After calling the callback function");
}

higherOrderFunction(firstClassFunction);

//we can also return a function from another function

function outerFunction() {
    return function innerFunction() {
        console.log("This is the inner function");
    }
}

outerFunction()(); //we can call the inner function by calling the outer function and then calling the inner function.
//or we can assign the inner function to a variable and then call it.

const innerFunction = outerFunction();
innerFunction();
