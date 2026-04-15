// Types of functions in JavaScript with examples

// 1) Function Declaration
function multiply(a, b) {
  return a * b;
}

// 2) Function Expression
const divide = function (a, b) {
  return a / b;
};

// 3) Arrow Function
const greet = (name = "Guest") => `Hello, ${name}`;

// 4) IIFE (Immediately Invoked Function Expression)
const iifeResult = (function () {
  return "IIFE runs immediately";
})();

// 5) Callback Function
function processNumber(number, callback) {
  return callback(number);
}

const square = n => n * n;

// 6) Method Function (function inside object)
const student = {
  name: "Nirajan",
  showName() {
    return `Student name: ${this.name}`;
  },
};

// Example output
console.log("1) Function Declaration:", multiply(4, 5));
console.log("2) Function Expression:", divide(20, 4));
console.log("3) Arrow Function:", greet("Bunny"));
console.log("4) IIFE:", iifeResult);
console.log("5) Callback Function:", processNumber(6, square));
console.log("6) Method Function:", student.showName());
