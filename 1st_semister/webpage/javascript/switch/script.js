const calculateResult = () => {
        const marks = Number(document.getElementById("num").value);
        const result = document.getElementById("result");

        switch (true) {
          case marks > 90 && marks <= 100:
            result.textContent = "You scored A+";
            break;
          case marks > 80 && marks <= 90:
            result.textContent = "You scored A";
            break;
          case marks > 70 && marks <= 80:
            result.textContent = "You scored B";
            break;
          case marks > 60 && marks <= 70:
            result.textContent = "You scored C";
            break;
          case marks >= 0 && marks <= 60:
            result.textContent = "You scored F";
            break;
          default:
            result.textContent = "Invalid marks!";
        }
      };