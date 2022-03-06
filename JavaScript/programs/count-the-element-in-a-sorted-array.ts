import firstOccurance from "./first-occurance-of-a-number";
import lastOccurance from "./last-occurance-of-a-number";
function countTheElementInASortedArray(
  array: Array<number>,
  n: number
): number {
  let first = firstOccurance(array, n);
  let last = lastOccurance(array, n);
  if (first !== -1 && last !== -1) return last - first + 1;
  return first;
}

const arr = [3, 4, 5, 5, 5, 23, 55, 56, 58, 75, 88, 102];
console.log(countTheElementInASortedArray(arr, 2));
