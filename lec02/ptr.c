#include <stdio.h>

int main() {
  char c1 = 'a';
  char* ptr;
  ptr = &c1;
  char c2 = *ptr;
  printf("%c %c \n", c1, c2);
  printf("", );
  
  return 0;
}
