// time complexity O(2^t * k)
// space complexity O(N)

function combinatorSum2(
  arr: Array<number>,
  target: number,
  i: number = 0,
  ans: Array<number> = []
): number {
  if (i >= arr.length) {
    if (target === 0) {
      console.log(ans);
      return 1;
    } else return 0;
  }
  let l: number = 0,
    r: number = 0;

  if (arr[i] <= target) {
    ans.push(arr[i]);
    l = combinatorSum2(arr, target - arr[i], i + 1, ans);
    // remove the element added for not taken case
    ans.pop();
  }
  r = combinatorSum2(arr, target, i + 1, ans);

  return l + r;
}
var arr = [2, 3, 6, 7];
console.log(combinatorSum2(arr, 7));
