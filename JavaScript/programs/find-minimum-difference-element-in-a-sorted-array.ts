import findFloorOfAnElementInASortedArray from "./find-floor-of-an-element-in-a-sorted-array";
import findCeilOfAnElementInASortedArray from "./find-ceil-of-an-element-in-a-sorted-array";

function findMinimumDifferenceElementInASortedArray(
  array: Array<number>,
  n: number
): number {
  const floorIdx = findFloorOfAnElementInASortedArray(array, n);

  const ceilIdx = findCeilOfAnElementInASortedArray(array, n);

  const ans =
    ceilIdx !== -1 && floorIdx !== -1
      ? Math.abs(array[floorIdx] - n) < Math.abs(array[ceilIdx] - n)
        ? floorIdx
        : ceilIdx
      : ceilIdx == -1
      ? floorIdx
      : ceilIdx;

  return ans;
}

const arr = [3, 5, 23, 54, 57, 58, 75, 88, 102];
console.log(findMinimumDifferenceElementInASortedArray(arr, 55));
