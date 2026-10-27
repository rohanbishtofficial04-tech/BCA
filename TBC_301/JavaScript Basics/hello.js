// Display a prompt to the user and store their input in a variable
let userInput = prompt("What is your name?");

// Check if the user entered something or canceled the prompt
if (userInput !== null) {
    window.alert("Hello, " + userInput + "!");
} else {
    window.alert("User canceled the prompt.");
}
