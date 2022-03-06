import numberOfTimesASortedArrayIsRotated from "./number-of-times-a-sorted-array-is-rotated";
import binarySearch from "./binary-search";
import binarySearchReverseArray from "./binary-search-reverse-array";

function findAElementInARotatedSortedArray(
  array: Array<number>,
  n: number
): number {
  let start = 0,
    end = array.length;

  if (array.length === 0) {
    return -1;
  }

  const centerElementIndex = numberOfTimesASortedArrayIsRotated(array);

  const leftSearch = binarySearch(array.slice(start, centerElementIndex), n);
  const rightSearch =
    binarySearch(array.slice(centerElementIndex, end), n) + centerElementIndex;

  if (leftSearch !== -1) {
    return leftSearch;
  } else if (rightSearch !== -1) {
    return rightSearch;
  } else return -1;
}

const arr = [12, 14, 15, 16, 53, 2, 5, 6, 8];
console.log(findAElementInARotatedSortedArray(arr, 5));
