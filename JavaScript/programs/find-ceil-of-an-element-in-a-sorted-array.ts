export default function findCeilOfAnElementInASortedArray(
  arr: Array<number>,
  n: number
): number {
  let start = 0,
    end = arr.length - 1,
    ans = -1;

  while (start <= end) {
    const mid = start + Math.floor((end - start) / 2);

    if (arr[mid] === n) {
      return mid;
    } else if (n > arr[mid]) {
      start = mid + 1;
    } else if (n < arr[mid]) {
      ans = mid;
      end = mid - 1;
    }
  }
  return ans;
}

// const arr = [3, 5, 23, 55, 56, 58, 75, 88, 102];
// console.log(findCeilOfAnElementInASortedArray(arr, 103));
