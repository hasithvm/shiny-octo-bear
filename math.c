int pow(int x, int y) {
  if (x == 0) {
    return 0;
  }
  for (int i =0; i < y; i++) {
	x *= x;
  }
  return x;
}

