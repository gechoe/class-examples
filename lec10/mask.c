#include <stdio.h>

int main() {
  int value1 = 0;
  int value2 = 0;
  printf("Enter value 1: ");
  scanf(" %d", &value1);
  printf("Enter value 2: ");
  scanf(" %d", &value2);

  unsigned int mask = 0x80000000;
  int result1 = mask & value1;
  int result2 = mask & value2;
  printf("Mask: %08X Value: %08X Result: %08X\n", mask, value, result);
  if (result == 0) printf ("Your value is even\n");
  else printf("Your value is odd\n");
  
}
