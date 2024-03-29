export default function lastOccurance(arr: Array<number>, n: number): number {
  let start = 0,
    end = arr.length - 1,
    result = -1;

  while (start <= end) {
    const mid = start + Math.floor((end - start) / 2);

    if (arr[mid] === n) {
      result = mid;
      start = mid + 1;
    } else if (n > arr[mid]) {
      start = mid + 1;
    } else if (n < arr[mid]) {
      end = mid - 1;
    }
  }
  return result;
}

// const arr = [3, 4, 5, 5, 5, 23, 55, 56, 58, 75, 88, 102];
// console.log(lastOccurance(arr, 5));
