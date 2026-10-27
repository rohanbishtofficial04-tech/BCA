//A pure function is a function that, given the same input, will always return the same output and does not have any side effects (like modifying external variables or states).

// Example of a pure function
function add(a, b) {
    return a + b;
}

add(2, 3); // returns 5
add(2, 3); // still returns 5, no side effects