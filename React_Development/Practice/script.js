//this is known as DOM Manipulation
//Dom manipulation is the process of changing the structure, style, or content of a web page using JavaScript. It allows developers to dynamically update the content and appearance of a web page without requiring a full page reload. This can be done by selecting elements from the DOM (Document Object Model) and modifying their properties, attributes, or styles.
//here we are selecting the h1 element from the DOM using the querySelector method and storing it in a variable called h1. Then we are changing the innerText, textContent, and innerHTML properties of the h1 element to update its content. Finally, we are using the setAttribute method to change the style of the h1 element to have a red color.
let h1 = document.querySelector("h1");
h1.innerText = "Fuck Off";
h1.textContent = "Fuck Off";
h1.innerHTML = "<i>The Legend Of Zelda<i>";
h1.setAttribute("style", "color:red");

//here we are selecting the img element from the DOM using the querySelector method and storing it in a variable called img. Then we are using the setAttribute method to change the src attribute of the img element to a new image URL. This will update the image displayed on the web page.
let img = document.querySelector("img");
img.setAttribute(
  "src",
  "https://encrypted-tbn0.gstatic.com/images?q=tbn:ANd9GcSbN9JrFu1uzVnrEzc3iCs6iUX-i478Gnqcp00G6IwaEg&s=10",
);

//grt attribute and set attribute are used to get and set the value of an attribute of an HTML element. The getAttribute method retrieves the current value of a specified attribute, while the setAttribute method allows you to change the value of a specified attribute. In this example, we are using these methods to get and set the href attribute of an anchor tag.
let a = document.querySelector("a");
console.log(a.getAttribute("href")); //print the current href attribute value of the anchor tag
a.setAttribute("href", "https://www.youtube.com"); //change the href attribute value of the anchor tag to "https://www.youtube.com"
//or
//a.href="www.youtube.com";
a.removeAttribute("href"); //remove the href attribute from the anchor tag

//DYNNAMIC DOM MANIPULATION
//Dynamic DOM manipulation refers to the ability to modify the structure, style, or content of a web page in real-time based on user interactions or other events. This allows developers to create more interactive and responsive web applications. In this example, we are using the addEventListener method to listen for a click event on the h1 element. When the h1 element is clicked, we are changing its innerText property to "You Clicked Me!" and updating its style to have a blue color.

let h2 = document.createElement("h2"); //create a new h2 element
h2.innerText = "This is a new h2 element created using JavaScript"; //set the innerText of the new h2 element

console.log(h2); //print the new h2 element to the console

//document.querySelector("body").appendChild(h2); or
//let body = document.querySelector("body");
//body.appendChild(h2);
//let body = querySelector("div").appendChild(h2); //append the new h2 element to the body of the document, making it the last child of the body
//append the new h2 element to the body of the document, making it the last child of the body, its equivalent to document.body.appendChild(h2); but the latter is more efficient as it directly accesses the body element without having to search for it in the DOM tree.

document.body.appendChild(h2); //append the new h2 element to the body of the document, making it the last child of the body

document.body.prepend(h2); //prepend the new h2 element to the body of the document, making it the first child of the body

document.body.insertBefore(h2, h1); //insert the new h2 element before the h1 element in the body of the document

document.body.removeChild(h2); //remove the new h2 element from the body of the document

//h2.remove(); //remove the new h2 element from the body of the document just like document.body.removeChild(h2); but the latter is more efficient as it directly accesses the h2 element without having to search for it in the DOM tree.

let h3 = document.createElement("h1");
h3.textContent = "Hey There! (From Js)";

document.querySelector("div").append(h3);
document.querySelector("div").prepend(h3);

h3.style.color = "red";

h3.classList.add("hello");

//remove first item from unordered list
let ul = document.querySelector("ul");
ul.removeChild(ul.firstElementChild); //remove the first child element of the unordered list

//remove second item from unordered list
ul.removeChild(ul.children[0]); //remove the second child element of the unordered list
//we took 0 because after removing the first child, the second child becomes the first child in the list

//remove last item from unordered list
ul.removeChild(ul.lastElementChild); //remove the last child element of the unordered list

//highligting even items in ordered list
let ol = document.querySelectorAll("ol li:nth-child(even)"); //select all even child elements of the ordered list
for (let i = 0; i < ol.length; i++) {
  ol[i].classList.add("highlight"); //add the highlight class to each even child element of the ordered list
}

//increasing size of all <p> elements to 25px
let p = document.querySelectorAll("p");
for (i = 0; i < p.length; i++) {
  p[i].style.fontSize = "25px";
}
//or
// for (i = 0; i < p.length; i++) {
//   p[i].classList.add("fontsize");
// }