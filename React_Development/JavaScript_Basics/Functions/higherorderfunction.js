// This is a higher-order function that takes a callback function as an argument
function higherOrderFunction(callback) {
  console.log("Before calling the callback function");
  callback();
  console.log("After calling the callback function");
}

higherOrderFunction(function() {
  console.log("Inside the callback function");
});