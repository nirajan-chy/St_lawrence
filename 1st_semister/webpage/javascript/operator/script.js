const getNumber = () => {
  return {
    num1: Number(document.getElementById("num1").value),
    num2: Number(document.getElementById("num2").value),
  };
};

const result = value => {
  document.getElementById("result").textContent = "Result : " + value;
};
const Add = () => {
  const { num1, num2 } = getNumber();
  result(num1 + num2);
};

const subtract = () => {
  const { num1, num2 } = getNumber();
  result(num1 - num2);
};
const multiple = () => {
  const { num1, num2 } = getNumber();
  result(num1 * num2);
};
const division = () => {
  const { num1, num2 } = getNumber();
  result(num1 / num2);
};
