<<<<<<< HEAD
//A 2d dynamically allocated array that is the "flat kind"                       
                                                                                 
#include <stdio.h>                                                               
#include <stdlib.h>                                                              
                                                                                 
void init_matrix(int* m, int input_value, int rows, int cols) {                                   
  int i, j;                                                                      
  for (i = 0; i < rows; i++) {  // for each row i                                
    for (j = 0; j < cols; j++) { // iterate over each column in row i            
        m[i*cols + j] = input_value;                                                       
    }                                                                            
  }                                                                              
}                                                                                
                                                                                 
int main() {                                                                     
  int nrows = 0;                                                                
  int ncols = 0;                                                               
  int value = 0;  

  printf("Enter a number of rows: ");
  scanf("%d", &nrows);

  printf("Enter a number of cols: ");
  scanf("%d", &ncols);
                                                                               
  int* matrix = malloc(sizeof(int) * nrows * ncols);                             
  //init_matrix(matrix, nrows, ncols);                                             

  for (int i = 0; i < nrows; i++) {
    for (int j = 0; j < ncols; j++) {
      printf("Please enter a value for matrix [%d][%d]: ", i, j);
      scanf("%d", value);
      
      init_matrix(matrix, value, i, j); 
    }                                                                                  
  }

  printf(matrix[i*ncols + j];
  free(matrix);                                                                  
  matrix = NULL;                                                                 
  return 0;                                                                      
}
=======
#include <stdio.h>
#include <stdlib.h>

int main() {
  int nrows = 50;
  int ncols = 100;
  printf("Please enter a number of rows: ");
  scanf(" %d", &nrows);
  printf("\n");

  printf("Please enter a number of cols: ");
  scanf(" %d", &ncols);
  printf("\n");

  int* m = malloc(sizeof(int) * nrows * ncols);

  int i, j;
  for (i = 0; i < nrows; i++) {  // for each row i
    for (j = 0; j < ncols; j++) { // iterate over each column in row i
        printf("\nEnter a value m[%d][%d]: ", i, j);
        int val = 0;
        scanf(" %d", &val);
        m[i*ncols + j] = val;
    }
  }
  printf("\n\nHere is your matrix!\n");

  for (i = 0; i < nrows; i++) {  // for each row i
    for (j = 0; j < ncols; j++) { // iterate over each column in row i
        printf("%d ", m[i*ncols + j]);
    }
    printf("\n");
  }

  free(m);
  m = NULL;
  return 0;
}

>>>>>>> bfddc82fa96b1cce003a715b39b87329845d3424
