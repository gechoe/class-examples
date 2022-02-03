#include <stdio.h>

void inc(int* i) {
 int local = *i;
 local = local +1;
 *i = local;
}

int main() {
  int i = 5;
  printf("Before: %d\n", i);
  inc(&i);
  printf("After: %d\n", i);
  return 0;
}
