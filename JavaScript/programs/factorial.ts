// time complexity O(N)
// space complexity O(N)

function factorial(n: number): number {
  if (n === 0) return 1;

  return n * factorial(n - 1);
}

console.log(factorial(3));
