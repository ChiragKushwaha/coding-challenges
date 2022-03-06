// time complexity O(2^N * K)
// space complexity O(K * X)

function combinatorSum2(
  array: Array<number>,
  target: number,
  index: number = 0,
  ds: Array<number> = []
) {
  if (target === 0) {
    console.log(ds);
    return;
  }

  for (let i = index; i < array.length; i++) {
    // if (i > index && arr[i] === arr[i - 1]) continue;
    console.log(array[i], " ", i);
    if (array[i] > target) break;

    ds.push(array[i]);
    combinatorSum2(array, target - arr[i], i + 1, ds);
    ds.pop();
  }
}

var arr = [2, 4, 1, 1, 3];
arr.sort();
combinatorSum2(arr, 4);
