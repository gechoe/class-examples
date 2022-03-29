#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

struct chunk {
  int size;
  struct chunk *next;
};
struct chunk *flist = NULL;

void *malloc (size_t size) {
  if (size == 0){
    return NULL;
  }
<<<<<<< HEAD
  //Step 1: check free list for memory.
  //If found, remove it from free list, and return it.

  //Step 2: only allocated if no memory found.
=======
  // Step 1: check free list for memory 
  // If found, remove it from free list, and return it

  // Step 2: only allocated if no memory found
>>>>>>> a5c170df742ded83200bf174511fbff6a8486a8b
  void *memory = sbrk(size + sizeof(struct chunk));
  if (memory == (void *) -1) {
    return NULL;
  } else {
    struct chunk* chunk = (struct chunk*) memory;
<<<<<<< HEAD
  chunk -> size = size;
  chunk -> next = NULL;
  return (void*) (chunk + 1);
    return memory;
=======
    chunk->size = size;
    chunk->next = NULL;
    return (void*) (chunk + 1);
>>>>>>> a5c170df742ded83200bf174511fbff6a8486a8b
  }
}

void free(void *memory) {
<<<<<<< HEAD
  //Add memory to free list
=======
  // Add memory free list
>>>>>>> a5c170df742ded83200bf174511fbff6a8486a8b
  return;
}

