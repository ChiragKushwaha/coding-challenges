// function sumOfFirstNNumbers(n: number, sum: number = 0) {
//   if (n < 1) {
//     console.log(sum);
//     return;
//   }
//   sumOfFirstNNumbers(n - 1, sum + n);
// }

// functional
function sumOfFirstNNumbers(n: number): number {
  if (n === 0) {
    return 0;
  }
  return n + sumOfFirstNNumbers(n - 1);
}

console.log(sumOfFirstNNumbers(5));
