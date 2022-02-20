// time complexity O(2^N * N)
// space complexity O(N)

// subsequence can be contiguous (follows the order) or not contiguous

// function printSubsequencesWithSum(
//   arr: Array<number>,
//   s: number,
//   i: number = 0,
//   ans: Array<number> = [],
//   sum: number = 0
// ): boolean {
//   if (i >= arr.length) {
//     if (sum == s) {
//       console.log(ans);
//       return true;
//     } else return false;
//   }
// ans.push(arr[i]);
//   if (printSubsequencesWithSum(arr, s, i + 1, ans, sum + arr[i]))
//     return true;
// ans.pop();
//   if (printSubsequencesWithSum(arr, s, i + 1, ans, sum)) return true;

//   return false;
// }

function printSubsequencesWithSum(
  arr: Array<number>,
  s: number,
  i: number = 0,
  ans: Array<number> = [],
  sum: number = 0
): number {
  if (i >= arr.length) {
    if (sum == s) {
      console.log(ans);
      return 1;
    } else return 0;
  }
  ans.push(arr[i]);
  const l = printSubsequencesWithSum(arr, s, i + 1, ans, sum + arr[i]);
  ans.pop();
  const r = printSubsequencesWithSum(arr, s, i + 1, ans, sum);

  return l + r;
}
var arr = [1, 3, 1, 2];
console.log(printSubsequencesWithSum(arr, 2));
