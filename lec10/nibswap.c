#include <stdio.h>

int main() {
  unsigned int a = 0xAB;
  unsigned int leftMask = 0xF0;
  unsigned int rightMask = 0x0F;
  unsigned int left = (leftMask & a) ;
  unsigned int right = (rightMask & a) ;
  unsigned int leftShift = left >> 4;
  unsigned int rightShift = right << 4;
  unsigned flipped = leftShift | rightShift;

  printf("Left: %08X Right: %08X\n", left, right);
  printf("Left: %08X Right: %08X\n", leftShift, rightShift);
  printf("Before: %08X After: %08X\n", a, flipped);
}
