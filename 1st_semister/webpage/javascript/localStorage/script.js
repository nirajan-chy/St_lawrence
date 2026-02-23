let count = 0;

const getNum = () => {
  return document.getElementById("num");
};

const increment = () => {
  count++;
  getNum().textContent = count;
};

const decrement = () => {
  count--;
  getNum().textContent = count;
};

const resetCount = () => {
  count = 0;
  getNum().textContent = count;
};

const save = () => {
  localStorage.setItem("count number", count);
};

const load = () => {
  const saved = localStorage.getItem("count number");
  if (saved !== null) {
    count = parseInt(saved);
    getNum().textContent = count;
  }
};
