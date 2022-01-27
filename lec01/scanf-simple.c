<<<<<<< HEAD
#include <stdio.h>
  
=======
// To run, specify data separated by spaces
// test 4 5.7
// test 4 5.700000
#include <stdio.h>

>>>>>>> f67b3ae125149251cc8516719b1e1b937d9ff4fa
int main() {
  int x;
  float y;
  char s[100];
<<<<<<< HEAD

  scanf("%s %d %f", s, &x, &y);

  printf("%s %d %f\n", s, x, y);

  return 0;
}
=======
  scanf("%s%d%f", s, &x, &y); // don't include newline
  printf("%s %d %f\n", s, x, y);
  return 0;
}

>>>>>>> f67b3ae125149251cc8516719b1e1b937d9ff4fa
