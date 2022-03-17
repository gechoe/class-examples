#include <stdio.h>

int main() {
  int number = 0;
  int result = 0;
  
  printf("Enter a positive decimal number: ");
  scanf(" %d", &number);
  
  while (number != 0) {
    number = result;
    result /= 2;
    printf("%d, %d", number, result);
  }
  
  return 0;
}
