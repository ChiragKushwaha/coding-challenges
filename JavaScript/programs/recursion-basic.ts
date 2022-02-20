// when a function calls itself
// Untill a specific condition is met

// -> Recursion
// -> Base Condition
// -> Stack Overflow | stack space
// -> Recursion tree

function recursionBasic(
  arr: Array<number>,
  i: number = 0,
  who: string = "first"
) {
  if (i >= arr.length) return;

  console.log(i, "before", arr[i], who);
  recursionBasic(arr, i + 1, "first");
  recursionBasic(arr, i + 2, "second");
  console.log(i, "after", arr[i], who);
}

var arr = [3, 5, 2];
recursionBasic(arr);
