#include <stdio.h>
#include <stdlib.h>

#define NCOLS 100 // constant: compiler replaces all occurrances with value

void init_matrix(int m[][NCOLS], int rows) {
  int i, j;
  for (i = 0; i < rows; i++) {  // for each row i
    for (j = 0; j < NCOLS; j++) { // iterate over each column in row i
        m[i][j] = 0;
    }
  }
}

int main() {
  int matrix[50][NCOLS];
  init_matrix(matrix, 50);

  return 0;
}

