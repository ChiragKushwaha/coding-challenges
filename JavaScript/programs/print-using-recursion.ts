function print(i: number, n: number) {
  if (i > n) return;

  print(i + 1, n);
  console.log(i);
}

print(2, 6);
