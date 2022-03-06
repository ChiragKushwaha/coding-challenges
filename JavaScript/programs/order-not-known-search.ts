import binarySearch from "./binary-search";
import binarySearchReverseArray from "./binary-search-reverse-array";

function orderNotKnownSearch(arr: Array<number>, n: number) {
  if (arr[0] < arr[arr.length - 1]) {
    return binarySearch(arr, n);
  } else {
    return binarySearchReverseArray(arr, n);
  }
}

const arr = [3, 5, 23, 55, 56, 58, 75, 88, 102];
console.log(orderNotKnownSearch(arr, 5));
console.log(orderNotKnownSearch(arr.reverse(), 5));
