const express = require("express");
const fs = require("fs");
const zlib = require("zlib");
const status = require("express-status-monitor");
const app = express();
app.use(express.json());
app.use(status());

const port = 3000;

fs.createReadStream("./sample.txt").pipe(
  zlib.createGzip().pipe(fs.createWriteStream("./sample.txt")),
);

app.get("/", (req, res) => {
  // fs.readFile("./sample.txt", (err, data) => {
  //   res.end(data);
  // });

  const stream = fs.createReadStream("./sample.txt", "utf-8");
  stream.on("data", chunk => res.write(chunk));
  stream.on("end", () => res.end);
});
app.listen(port, () => {
  console.log(`Server is running on port ${port}`);
});
