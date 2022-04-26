#include <stdio.h>

typedef void (*functionType)(int);

void example(int a) {
  printf("This is a function stored as data! %d\n", a);
}
 
int main() {
  functionType myFunction = example;
  //Dereference function (*myfunction) then input the parameters (10) for it:
  (*myFunction)(10);
}
