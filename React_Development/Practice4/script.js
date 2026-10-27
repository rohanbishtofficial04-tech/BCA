const keys = document.querySelectorAll(".key");
keys.forEach(function (key) {
  key.addEventListener("click", function () {
    console.log(key.dataset.note);
    key.textContent = key.dataset.note;
    setTimeout(function () {
      key.textContent = "?";
    }, 1000);
  });
});