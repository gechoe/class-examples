#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include "rand.h"
//These definitions here, ROUND, BUFFER, LOOP automatically convert/change any
//instance of this to the designate int, like a global variable (traditional 
//old c-style)
#define ROUNDS 10
#define BUFFER 100
#define LOOP 100000

int main ( ) {
  void *buffer[BUFFER];
  for (int i = 0; i < BUFFER; i++) {
    buffer[i] = NULL;
  }

  void *init = sbrk(0);
  void *current;
  printf("The initial top of the heap is %p.\n", init);
  for (int j = 0 ; j < ROUNDS; j++) {
    for (int i= 0 ; i < LOOP ; i++) {
      int index = rand() % BUFFER;
      if (buffer[index] != NULL) {
        free(buffer[index]);
        buffer[index] = NULL;
      } else {
        size_t size = (size_t) randExp(8, 4000); 
        int *memory = NULL;
        memory = malloc(size);

        if (memory == NULL) {
          fprintf(stderr, "malloc failed\n");
          return(1);
        } 
        /* writing to the memory so we know it exists */
        *memory = 123;
        buffer[index] = memory;
      }
    }
    current = sbrk(0);
    int allocated = (int) ((current - init) / 1024);
    printf("%d\n" , j);
    printf("The current top of the heap is %p.\n", current);
    printf("Increased by %d (0x%x) Kbyte\n", allocated, allocated);
  }

  for (int i = 0; i < BUFFER; i++) {
    free(buffer[i]); 
  }
  return 0 ;
}
