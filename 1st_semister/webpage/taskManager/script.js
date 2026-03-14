const input = document.getElementById("taskInput");
const addBtn = document.getElementById("addBtn");
const taskList = document.getElementById("taskList");

let tasks = JSON.parse(localStorage.getItem("tasks")) || [];
let editIndex = null;

function saveTasks() {
  localStorage.setItem("tasks", JSON.stringify(tasks));
}

function renderTasks() {
  taskList.innerHTML = "";

  tasks.forEach((task, index) => {
    const li = document.createElement("li");

    if (task.completed) {
      li.classList.add("completed");
    }

    li.innerHTML = `
      <span>${task.text}</span>
      <div>
        <button onclick="toggleTask(${index})">✔</button>
        <button onclick="editTask(${index})">✏️</button>
        <button onclick="deleteTask(${index})">❌</button>
      </div>
    `;

    taskList.appendChild(li);
  });
}

function resetEditState() {
  editIndex = null;
  addBtn.textContent = "Add";
}

function addTask() {
  const text = input.value.trim();
  if (text === "") return;

  if (editIndex !== null) {
    tasks[editIndex].text = text;
    resetEditState();
  } else {
    tasks.push({ text, completed: false });
  }

  input.value = "";
  saveTasks();
  renderTasks();
}

function toggleTask(index) {
  tasks[index].completed = !tasks[index].completed;
  saveTasks();
  renderTasks();
}

function editTask(index) {
  editIndex = index;
  input.value = tasks[index].text;
  addBtn.textContent = "Save";
  input.focus();
}

function deleteTask(index) {
  tasks.splice(index, 1);

  if (editIndex === index) {
    resetEditState();
  } else if (editIndex !== null && editIndex > index) {
    editIndex -= 1;
  }

  saveTasks();
  renderTasks();
}

addBtn.addEventListener("click", addTask);
input.addEventListener("keydown", event => {
  if (event.key === "Enter") {
    addTask();
  }
});

renderTasks();
