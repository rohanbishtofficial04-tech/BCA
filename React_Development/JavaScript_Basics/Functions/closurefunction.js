// Closure Example
// A closure is a function that has access to its own scope, the outer function's scope, and the global scope and it remembers the environment in which it was created.
function outer(){
    let count=0;
    return function(){
        count++;
        console.log(count);
    }
}
// First Counter
const counter = outer();
counter();
counter();
counter();

console.log("\nSecond Counter\n");  //Second Counter

const counter2 = outer();
counter2();
counter2();
counter2();
