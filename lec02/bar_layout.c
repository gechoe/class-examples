#include <stdio.h>

struct bar {
  char str[3];
  float x,y,z;
};

int main() {
  struct bar b;
  b.str[0] = 'l';
  b.str[1] = 'o';
  b.str[2] = 'l';
  b.str[3] = '\0';
  b.x = 0.0f;
  b.y = 1.0f;
  b.z = 2.0f;

  printf("data 1: %p %c\n", &(b.str[0]), b.str[0]);
  printf("data 2: %p %c\n", &(b.str[1]), b.str[1]);
  printf("data 3: %p %c\n", &(b.str[2]), b.str[2]);
  printf("data 4: %p %c\n", &(b.str[3]), b.str[3]);
  printf("data 5: %p %f\n", &(b.x), b.x);
  printf("data 6: %p %f\n", &(b.y), b.y);
  printf("data 7: %p %f\n", &(b.z), b.z);
  return 0;
}
