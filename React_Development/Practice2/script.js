//Single Click Event Listener
let h4 = document.querySelector("h4");
h4.addEventListener("click", function () {
  h4.style.color = "red";
});

//Double Click Event Listener
let p2 = document.querySelector("p2");
function dblclick() {
  p2.style.color = "green";
}
p2.addEventListener("dblclick", dblclick);

//Removing A Event Listener
p2.removeEventListener("dblclick",dblclick);

//input event listener to show the value of the input field in the console
let input = document.querySelector("input");
input.addEventListener("input", function (details) {
  if (details.data !== null) {
  console.log(details.data); //print the value of the input field to the console
  }
});
//or
// input.addEventListener("input", function (details) {
//   console.log(details.data); //print the value of the input field to the console
// });
let select = document.querySelector("select");
let device = document.querySelector("#device");
select.addEventListener("change", function (details) {
    console.log(details.target.value); //print the value of the input field to the console
    device.textContent = `${details.target.value} Device Is Selected`;
    console.log(details);
});