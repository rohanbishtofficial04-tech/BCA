const R = 3;
const MAX_P = 10;
let P = 0;

let allocation = Array(MAX_P).fill(0).map(() => Array(R).fill(0));
let maximum = Array(MAX_P).fill(0).map(() => Array(R).fill(0));
let need = Array(MAX_P).fill(0).map(() => Array(R).fill(0));
let available = Array(R).fill(0);
let completed = Array(MAX_P).fill(0);
let priority = Array(MAX_P).fill(0);

function updateOutput(text) {
  document.getElementById('output').textContent = text;
}

function calculateNeed() {
  for (let i = 0; i < P; i++) {
    for (let j = 0; j < R; j++) {
      need[i][j] = maximum[i][j] - allocation[i][j];
    }
  }
}

function isSafe() {
  let work = [...available];
  let finish = Array(P).fill(false);
  let safeSeq = [];

  for (let count = 0; count < P; count++) {
    let found = false;
    for (let i = 0; i < P; i++) {
      if (!finish[i] && !completed[i]) {
        let canProceed = need[i].every((n, j) => n <= work[j]);
        if (canProceed) {
          for (let j = 0; j < R; j++) work[j] += allocation[i][j];
          safeSeq.push("P" + i);
          finish[i] = true;
          found = true;
        }
      }
    }
    if (!found) return false;
  }

  updateOutput("System is in a safe state.\nSafe Sequence: " + safeSeq.join(" -> "));
  return true;
}

function requestResources() {
  let chosen_pid = prompt("Enter Patient ID to request resources (0 to " + (P - 1) + "):");
  if (chosen_pid === null || isNaN(chosen_pid)) return;
  chosen_pid = parseInt(chosen_pid);

  if (chosen_pid < 0 || chosen_pid >= P || completed[chosen_pid]) {
    updateOutput("Invalid patient ID or already discharged.");
    return;
  }

  let request = [];
  for (let i = 0; i < R; i++) {
    let val = parseInt(prompt("Enter request for resource " + i + ":"));
    if (isNaN(val)) {
      updateOutput("Invalid input.");
      return;
    }
    request.push(val);
  }

  // DEBUG
  console.log("Request for P" + chosen_pid + ": ", request);
  console.log("Available: ", available);
  console.log("Need: ", need[chosen_pid]);

  for (let i = 0; i < R; i++) {
    if (request[i] > need[chosen_pid][i] || request[i] > available[i]) {
      updateOutput("Request invalid or exceeds available resources.");
      return;
    }
  }

  // Apply request
  for (let i = 0; i < R; i++) {
    available[i] -= request[i];
    allocation[chosen_pid][i] += request[i];
  }
  calculateNeed();

  console.log("After Allocation:");
  console.log("Available:", available);
  console.log("Allocation P" + chosen_pid + ":", allocation[chosen_pid]);
  console.log("Need P" + chosen_pid + ":", need[chosen_pid]);

  if (!isSafe()) {
    // Rollback
    for (let i = 0; i < R; i++) {
      available[i] += request[i];
      allocation[chosen_pid][i] -= request[i];
    }
    calculateNeed();
    updateOutput("Unsafe state detected. Request rolled back.");
  } else {
    updateOutput("Resources allocated to P" + chosen_pid);
  }
}

function dischargePatient() {
  let pid = parseInt(prompt("Enter Patient ID to discharge (0 to " + (P - 1) + "):"));
  if (pid < 0 || pid >= P || completed[pid]) {
    updateOutput("Invalid or already discharged.");
    return;
  }
  for (let i = 0; i < R; i++) {
    available[i] += allocation[pid][i];
    allocation[pid][i] = 0;
    need[pid][i] = 0;
  }
  completed[pid] = 1;
  updateOutput("Patient P" + pid + " discharged.");
}

function viewStatus() {
  let out = "Available Resources: " + available.join(" ") + "\n\n";
  out += "Allocation Matrix:\n";
  for (let i = 0; i < P; i++) {
    if (!completed[i]) out += "P" + i + ": " + allocation[i].join(" ") + "\n";
  }
  out += "\nMaximum Matrix:\n";
  for (let i = 0; i < P; i++) {
    if (!completed[i]) out += "P" + i + ": " + maximum[i].join(" ") + "\n";
  }
  out += "\nNeed Matrix:\n";
  for (let i = 0; i < P; i++) {
    if (!completed[i]) out += "P" + i + ": " + need[i].join(" ") + "\n";
  }
  out += "\nPriority:\n";
  for (let i = 0; i < P; i++) {
    if (!completed[i]) out += "P" + i + ": " + priority[i] + "\n";
  }
  updateOutput(out);
}

function admitNewPatient() {
  if (P >= MAX_P) {
    updateOutput("Cannot admit more patients.");
    return;
  }

  let maxResources = [];
  for (let i = 0; i < R; i++) {
    let val = parseInt(prompt("Enter max need for resource " + i + ":"));
    if (isNaN(val)) {
      updateOutput("Invalid input.");
      return;
    }
    maxResources.push(val);
  }

  let prio = parseInt(prompt("Enter priority (1 = high, 5 = low):"));
  if (isNaN(prio)) {
    updateOutput("Invalid priority.");
    return;
  }

  for (let i = 0; i < R; i++) {
    maximum[P][i] = maxResources[i];
    allocation[P][i] = 0;
  }
  priority[P] = prio;
  completed[P] = 0;
  P++;

  calculateNeed();
  updateOutput("Patient P" + (P - 1) + " admitted.");
}

function resetSystem() {
  allocation = Array(MAX_P).fill(0).map(() => Array(R).fill(0));
  maximum = Array(MAX_P).fill(0).map(() => Array(R).fill(0));
  need = Array(MAX_P).fill(0).map(() => Array(R).fill(0));
  available = Array(R).fill(0);
  completed = Array(MAX_P).fill(0);
  priority = Array(MAX_P).fill(0);
  P = 0;

  for (let i = 0; i < R; i++) {
    let val = parseInt(prompt("Enter available for resource " + i + ":"));
    if (isNaN(val)) {
      updateOutput("Invalid resource input.");
      return;
    }
    available[i] = val;
  }

  updateOutput("System reset.");
}

function checkSafeState() {
  if (!isSafe()) updateOutput("System is NOT in a safe state.");
}

window.onload = function () {
  for (let i = 0; i < R; i++) {
    let val = parseInt(prompt("Enter available for resource " + i + ":"));
    if (isNaN(val)) {
      updateOutput("Invalid startup input.");
      return;
    }
    available[i] = val;
  }
};
