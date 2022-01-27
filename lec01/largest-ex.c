#include <stdio.h>
#include <stdlib.h>

int largest(int arr[], int n) {
  int large = arr[0];

  for (int i = 1; i < n; i++) {
    if (arr[i] > large) {
      large = arr[i];
    }
  }
<<<<<<< HEAD
  return large; 
=======
  return large;
>>>>>>> 234ba69b4c6df669fd52ada765b79a086b26cda2
}

int main() {
  int values[10];
  //call rand() to generate a random integer
  for (int i = 0; i < 10; i++) {
    values[i] = rand();
    printf("%d\n", values[i]);
  }

  printf("The largest is %d\n", largest(values, 10));
}
