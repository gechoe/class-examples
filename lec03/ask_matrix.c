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
