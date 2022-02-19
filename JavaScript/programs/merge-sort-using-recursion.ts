// inplace
function mergeSortInplace(start: number, end: number) {
  if (end - start === 1) {
    return;
  }

  const mid = Math.floor((start + end) / 2);

  mergeSortInplace(start, mid);
  mergeSortInplace(mid, end);

  mergeInplace(start, mid, end);
}

function mergeInplace(start: number, mid: number, end: number) {
  let first_start = start,
    first_end = mid,
    second_start = mid,
    second_end = end,
    counter = 0,
    result: Array<number> = [];

  while (first_start < first_end && second_start < second_end) {
    if (arr[first_start] < arr[second_start]) {
      result[counter++] = arr[first_start++];
    } else {
      result[counter++] = arr[second_start++];
    }
  }

  while (first_start < first_end) {
    result[counter++] = arr[first_start++];
  }

  while (second_start < second_end) {
    result[counter++] = arr[second_start++];
  }

  for (let i = 0; i < result.length; i++) {
    arr[start + i] = result[i];
  }
}

// function mergeSort(arr: Array<number>): Array<number> {
//   if (arr.length === 1) {
//     return arr;
//   }

//   const mid = arr.length / 2;

//   const left = mergeSort(arr.slice(0, mid));
//   const right = mergeSort(arr.slice(mid, arr.length));

//   return merge(left, right);
// }

// function merge(first: Array<number>, second: Array<number>): Array<number> {
//   let first_start = 0,
//     first_end = first.length,
//     second_start = 0,
//     second_end = second.length,
//     counter = 0,
//     result: Array<number> = [];

//   while (first_start < first_end && second_start < second_end) {
//     if (first[first_start] < second[second_start]) {
//       result[counter++] = first[first_start++];
//     } else {
//       result[counter++] = second[second_start++];
//     }
//   }

//   while (first_start < first_end) {
//     result[counter++] = first[first_start++];
//   }

//   while (second_start < second_end) {
//     result[counter++] = second[second_start++];
//   }

//   return result;
// }

var arr = [3, 5, 2, 6, 72, 11, 77, 23, 3, 22, 10, 0];
mergeSortInplace(0, arr.length);
console.log(arr);
