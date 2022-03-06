export default function binarySearch(arr: Array<number>, n: number): number {
  let start = 0,
    end = arr.length - 1;

  while (start <= end) {
    const mid = start + Math.floor((end - start) / 2);

    if (arr[mid] === n) {
      return mid;
    } else if (n > arr[mid]) {
      start = mid + 1;
    } else if (n < arr[mid]) {
      end = mid - 1;
    }
  }
  return -1;
}

// const arr = [3, 5, 23, 55, 56, 58, 75, 88, 102];
// console.log(binarySearch(arr, 4));
