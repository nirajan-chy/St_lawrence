const getElements = () => {
  return {
    paragraph: document.getElementById("p"),
    input: document.getElementById("input"),
  };
};

const create = () => {
  const { paragraph, input } = getElements();
  const task = input.value;

  if (task.trim() !== "") {
    paragraph.textContent = task;
    input.value = "";
  } else {
    alert("Please enter a task!");
  }
};
