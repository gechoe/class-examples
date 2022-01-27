#include <stdio.h>

int func(int a, int b) {
	a = a + 5;
	return a - b;
}

int main() {
	int x, y;  
	x = 4;
	y = 7;
	y = func(x, y);
	printf("%d, %d\n", x, y);
   
  return 0; 
}
