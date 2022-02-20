// time complexity O(N/2)
// space complexity O(N/2)

// 1 2 3 4
// 4 3 2 1
function swap(arr: Array<number>, i: number, j: number) {
  const temp = arr[i];
  arr[i] = arr[j];
  arr[j] = temp;
}

// function reverseAnArray(arr: Array<number>, left: number, right: number) {
//   if (left >= right) {
//     console.log(arr);

//     return;
//   }
//   swap(arr, left, right);
//   reverseAnArray(arr, left + 1, right - 1);
// }
function reverseAnArray(arr: Array<number>, i: number, n: number) {
  if (i >= Math.floor(n / 2)) {
    console.log(arr);

    return;
  }
  swap(arr, i, n - i);
  reverseAnArray(arr, i + 1, n);
}

var arr = [1, 2, 3, 4];
reverseAnArray(arr, 0, arr.length - 1);
