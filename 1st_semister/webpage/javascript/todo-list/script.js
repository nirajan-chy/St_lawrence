const getElements = () => {
  return {
    taskList: document.getElementById("task-list"),
    input: document.getElementById("input"),
  };
};

const create = () => {
  const { taskList, input } = getElements();
  const task = input.value;

  if (task.trim() !== "") {
    const tasks = JSON.parse(localStorage.getItem("tasks")) || [];  
    tasks.push(task);
    localStorage.setItem("tasks", JSON.stringify(tasks));
    displayTasks(tasks, taskList);
    input.value = "";
  } else {
    alert("Please enter a task!");
  }
};

const deleteItem = index => {
  const tasks = JSON.parse(localStorage.getItem("tasks")) || [];
  tasks.splice(index, 1); // remove selected task
  localStorage.setItem("tasks", JSON.stringify(tasks));

  const { taskList } = getElements();
  displayTasks(tasks, taskList);
};

const displayTasks = (tasks, taskList) => {
  taskList.innerHTML = "";

  tasks.forEach((task, index) => {
    const listItem = document.createElement("li");
    listItem.textContent = task;

    const deleteBtn = document.createElement("button");
    deleteBtn.textContent = "Delete";
    deleteBtn.onclick = () => deleteItem(index);

    listItem.appendChild(deleteBtn);
    taskList.appendChild(listItem);
  });
};

window.onload = () => {
  const { taskList } = getElements();
  const tasks = JSON.parse(localStorage.getItem("tasks")) || [];
  displayTasks(tasks, taskList);
};
