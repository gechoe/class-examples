#include <stdio.h>
#include <stdlib.h>

void init_matrix(int* m, int rows, int cols) {
  int i, j;
  for (i = 0; i < rows; i++) {  // for each row i
    for (j = 0; j < cols; j++) { // iterate over each column in row i
        m[i*cols + j] = 0;
    }
  }
}

int main() {
  int nrows = 50;
  int ncols = 100;

  int* matrix = malloc(sizeof(int) * nrows * ncols);
  init_matrix(matrix, nrows, ncols);

  free(matrix);
  matrix = NULL;
  return 0;
}

