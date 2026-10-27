let status = true;

let mypromise = new Promise((resolve, reject) => {
  const res = 5 + 5;
  if (res === 10) {
    resolve("Resolved");
  } else {
    reject("Rejected");
  }
});

mypromise
  .then((message) => {
    console.log("Status: " + message);
  })
  .catch((message) => {
    console.log("Status: " + message);
  })
  .finally(() => {
    console.log("Promise is either resolved or rejected");
    status = false;
  });
