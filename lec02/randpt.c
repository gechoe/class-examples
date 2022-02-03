#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void rand_point(int* x, int* y, int* z) {
  *x = rand() % 10;
  *y = rand() % 10;
  *z = rand() % 10;
}

void main() {
  int x,y,z;
  srand(time(0));
  rand_point(&x, &y, &z);
  printf("point: %d, %d, %d\n", x, y, z);
}
