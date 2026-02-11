const compare = () => {
  const num = Number(document.getElementById("num").value);
  const result = document.getElementById("result");
  const comp = num > 40 ? "Pass" : "Fail";
  result.textContent = "You are " + comp;
};
