#include <stdio.h>
#include <stdlib.h>

int largest(int arr[], int n) {
  int large = arr[0];

  for (int i = 1; i < n; i++) {
    if (arr[i] > large) {
      large = arr[i];
    }
  }
  return large;
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
