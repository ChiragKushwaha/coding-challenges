// mid element speciality that it is smaller than his left as well as right element
function numberOfTimesASortedArrayIsRotated(array: Array<number>): number {
  let start = 0,
    end = array.length - 1,
    size = array.length;

  if (array[start] < array[end]) {
    return 0;
  }

  while (start <= end) {
    const mid = start + Math.floor((end - start) / 2);
    let prev = array[(mid + size - 1) % size];
    let next = array[(mid + 1) % size];

    if (prev >= array[mid] && array[mid] <= next) {
      return mid;
    } else if (array[start] <= array[mid]) {
      start = mid;
    } else if (array[end] >= array[mid]) {
      end = mid;
    }
  }
  return -1;
}

const arr = [12, 14, 15, 16, 53, 2, 5, 6, 8];
console.log(numberOfTimesASortedArrayIsRotated(arr));
