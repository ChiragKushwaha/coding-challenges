// time complexity O(2^N)
// space complexity O(N)

// MADAM

function fibonacci(n: number): number {
  if (n <= 1) {
    return n;
  }

  const last = fibonacci(n - 1);
  const second_last = fibonacci(n - 2);

  return last + second_last;
}

console.log(fibonacci(3));
