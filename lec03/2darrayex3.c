//A 2d dynamic array with a bunch of arrays (an array of arrays)
//However, the flat 2d array is more efficient and may not be as slow as this 2d array.
#include <stdio.h>
#include <stdlib.h>

void init_matrix(int** m, int rows, int cols) {
  int i, j;
  for (i = 0; i < rows; i++) {  // for each row i
    for (j = 0; j < cols; j++) { // iterate over each column in row i
        m[i][j] = 0;
    }
  }
}

int main() {
  int nrows = 50;
  int ncols = 100;

  //Has double stars (**) for two pointers since it's pointing to a pointer
  int** matrix = malloc(sizeof(int*) * nrows);
  for (int i = 0; i < nrows; i++) {
    matrix[i] = malloc(sizeof(int) * ncols);
  }

  init_matrix(matrix, nrows, ncols);

  //Must free like what is below!!
  for (int i = 0; i < nrows; i++) {
    free(matrix[i]);
  }
  free(matrix);
  matrix = NULL;
  return 0;
}

