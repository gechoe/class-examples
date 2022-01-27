#include <stdio.h>

int main() {
  int vals[4] = {1,2,3,4};

  int v1 = vals[2]; // '3'
  int v2 = *(vals + 2); // '3'
  printf("%d %d\n", v1, v2);

  printf("-------\n");
  for (int i = 0; i < 4; i++) {
    printf("%d\n", vals[i]);
  }

  printf("-------\n");
  for (int* ptr = vals; ptr < vals+4; ptr++) {
    printf("%d\n", *ptr);
  }

  return 0;
}

