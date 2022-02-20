// time complexity O(N/2)
// space complexity O(N/2)

// MADAM

function palindrome(s: string, i: number, n: number): boolean {
  if (i >= Math.floor(n / 2)) {
    return true;
  }

  return s[i] === s[n - i] && palindrome(s, i + 1, n);
}

var p = "MADAM";
var np = "CHIRAG";
console.log(palindrome(np, 0, np.length - 1));
