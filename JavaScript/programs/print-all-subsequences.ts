// time complexity O(2^N * N)
// space complexity O(N)

// subsequence can be contiguous (follows the order) or not contiguous

function printAllSubsequences(
  arr: Array<number>,
  i: number = 0,
  ans: Array<number> = []
) {
  if (i >= arr.length) {
    console.log(ans);
    return;
  }

  ans.push(arr[i]);
  printAllSubsequences(arr, i + 1, ans);
  ans.pop();
  printAllSubsequences(arr, i + 1, ans);
}

var arr = [3, 1, 2];
printAllSubsequences(arr);
