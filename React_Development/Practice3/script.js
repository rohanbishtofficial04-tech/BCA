let h1 = document.querySelector("h1");
window.addEventListener("keydown", function (event) {
  if (event.key === " ") {
    h1.textContent = "Space";
  } else {
    h1.textContent = event.key;
  }
});
