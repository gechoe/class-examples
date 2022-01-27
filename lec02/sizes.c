#include <stdio.h>

struct point {
  float xyz[3];
  int color;
};

int main() {
  int a;
  int vals[10];
  struct point p;
  struct point pts[3];

  printf("sizeof(a) = %lu\n", sizeof(a));
  printf("sizeof(vals) = %lu\n", sizeof(vals));
  printf("sizeof(p) = %lu\n", sizeof(p));
  printf("sizeof(pts) = %lu\n", sizeof(pts));
  return 0;
}
