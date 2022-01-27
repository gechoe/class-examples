#include <stdio.h>

void main() {
  int x,y,z;
  rand_point(&x, &y, &z);
  printf("point: %d, %d, %d\n", x, y, z);
}
