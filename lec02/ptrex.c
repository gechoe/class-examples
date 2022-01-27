#include <stdio.h>

int main() {
  char c1 = 'a';
  char c2 = 'b';
  char* ptr = NULL;
  ptr = &c1;
  if (ptr != NULL) {
    c2 = *ptr;
  }
  printf("%c %c \n", c1, c2);
  printf("%p\n", &c1);
  printf("%p\n", ptr);
  printf("%p\n", &c2);
  return 0;
}
