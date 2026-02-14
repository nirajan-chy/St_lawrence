const square = number => {
  return number * number;
};
const result = square(4);
console.log(result);

const add = (num1, num2) => {
  return num1 + num2;
};
const resultAdd = add(2, 3);
console.log(resultAdd);

const add1 = (num1 = 2, num2 = 2) => {
  return num1 + num2;
};
const resultAdd1 = add();
console.log(resultAdd);
