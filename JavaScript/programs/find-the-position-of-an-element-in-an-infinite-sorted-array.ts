function findThePositionOfAnElementInAnInfiniteSortedArray(
  array: Array<number>,
  n: number
): number {
  let start = 0,
    end = 1;
  while (array[end] < n) {
    start = end;
    end *= 2;
  }

  while (start <= end) {
    const mid = start + Math.floor((end - start) / 2);

    if (array[mid] === n) {
      return mid;
    } else if (n > array[mid]) {
      start = mid + 1;
    } else if (n < array[mid]) {
      end = mid - 1;
    }
  }
  return -1;
}

const array = [3, 5, 23, 55, 56, 58, 75, 88, 102];
console.log(findThePositionOfAnElementInAnInfiniteSortedArray(array, 3));
