#include <stdio.h>
#include <stdlib.h>

int main() {
  FILE* infile = NULL;

  infile = fopen("snacks.txt", "r");
  if (infile == NULL) {
    printf("Error: unable to open file %s\n", "input.txt");
    exit(1);
  }

  char buffer[1024];  // Allocate with more space than you think you need
  while (fgets(buffer, 1024, infile) != NULL) {
    char name[512];
    float cost = 0.0;
    sscanf(buffer, "%s %f", name, &cost);
    printf("Read data: %s $%.2f\n", name, cost);    
  }

  fclose(infile);
}

