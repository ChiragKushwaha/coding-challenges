import firstOccurance from "./first-occurance-of-a-number";

function findTheIndexOfFirstOneInABinarySortedArray(
  array: Array<number>,
  n: number
): number {
  let start = 0,
    end = 1;
  while (array[end] < n) {
    start = end;
    end *= 2;
  }
  return firstOccurance(array, n, start, end);
}

const array = [0, 0, 0, 0, 0, 1, 1, 1, 1, 1];
console.log(findTheIndexOfFirstOneInABinarySortedArray(array, 1));
