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

// 7) Rest Parameter Function
function sumAll(...numbers) {
  return numbers.reduce((total, num) => total + num, 0);
}

// 8) Closure Function
function createCounter(start = 0) {
  let count = start;
  return function () {
    count += 1;
    return count;
  };
}

const counter = createCounter(3);

// 9) Recursive Function
function factorial(n) {
  if (n <= 1) return 1;
  return n * factorial(n - 1);
}

// 10) Curried Function
const add = a => b => a + b;

// 11) Async Function
function wait(ms) {
  return new Promise(resolve => setTimeout(resolve, ms));
}

async function getMessageAfterDelay() {
  await wait(300);
  return "Async function completed after delay";
}

// 12) Generator Function
function* idGenerator() {
  let id = 1;
  while (id <= 3) {
    yield id;
    id += 1;
  }
}

const ids = idGenerator();

// Example output
console.log("1) Function Declaration:", multiply(4, 5));
console.log("2) Function Expression:", divide(20, 4));
console.log("3) Arrow Function:", greet("Bunny"));
console.log("4) IIFE:", iifeResult);
console.log("5) Callback Function:", processNumber(6, square));
console.log("6) Method Function:", student.showName());
console.log("7) Rest Parameter Function:", sumAll(2, 4, 6, 8));
console.log("8) Closure Function:", counter(), counter(), counter());
console.log("9) Recursive Function (factorial 5):", factorial(5));
console.log("10) Curried Function:", add(10)(15));
console.log(
  "11) Generator Function:",
  ids.next().value,
  ids.next().value,
  ids.next().value,
);

getMessageAfterDelay().then(message => {
  console.log("12) Async Function:", message);
});

// 13) Practice Question and Solution
// Question: Write a function to check whether a string is a palindrome.
function isPalindrome(text) {
  const normalized = text.toLowerCase().replace(/[^a-z0-9]/g, "");
  return normalized === normalized.split("").reverse().join("");
}

console.log(
  "13) Question - Palindrome Check ('madam'):",
  isPalindrome("madam"),
);
console.log(
  "13) Question - Palindrome Check ('hello'):",
  isPalindrome("hello"),
);
