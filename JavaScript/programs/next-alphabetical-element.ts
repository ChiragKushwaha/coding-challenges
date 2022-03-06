export default function nextAlphabeticalElement(
  arr: string,
  n: string
): string {
  let start = 0,
    end = arr.length - 1,
    ans = "#";

  while (start <= end) {
    const mid = start + Math.floor((end - start) / 2);

    if (arr[mid] === n) {
      start = mid + 1;
    } else if (n > arr[mid]) {
      start = mid + 1;
    } else if (n < arr[mid]) {
      ans = arr[mid];
      end = mid - 1;
    }
  }
  return ans;
}

const arr = "abcef";
console.log(nextAlphabeticalElement(arr, "a"));
