// 1) Default parameter function
const greet = (name = "Guest") => {
  console.log("Hello, " + name);
};

// 2) Return statement function
const add = (a, b) => {
  return a + b;
};

// 3) FizzBuzz function
const fizzBuzz = (limit = 20) => {
  for (let i = 1; i <= limit; i++) {
    if (i % 15 === 0) {
      console.log("FizzBuzz");
    } else if (i % 3 === 0) {
      console.log("Fizz");
    } else if (i % 5 === 0) {
      console.log("Buzz");
    } else {
      console.log(i);
    }
  }
};

// Example calls
console.log("--- greet() examples ---");
greet();
greet("Bunny");

console.log("\n--- add() example ---");
console.log("2 + 3 =", add(2, 3));

console.log("\n--- fizzBuzz() example ---");
fizzBuzz(15);
