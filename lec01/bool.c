#include <stdio.h>

int isEven(int val) {
  if (val % 2 == 0) {
    return 1;
  }
  return 0;

  /* Or the if statment above can be replaced with:
   * return (val % 2 == 0);
   * They would both perform the same action.
   */
}

int main() {

  int a = 0;
  int b = 7;

  if (isEven(a)) {
    printf("a is even\n");
  } else {
    printf("a is odd\n");
  }

  if (b) {
    printf("Any non-zero value is true!\n");
  }
  return 0;
}


