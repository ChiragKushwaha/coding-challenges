function linearSearch(arr: Array<number>, val: number) {
  for (var i = 0; i < arr.length; i++) {
    if (arr[i] === val) return i;
  }
  return -1;
}
