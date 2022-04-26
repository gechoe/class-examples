#include <stdio.h>
#include <time.h>
#include <stdlib.h>

//
struct thread_data {
  float s;
  int start_index;
  int end_index;
  float* array;
  int min; //put return value here
}; //

void* find_min(void* user_data) {
  struct thread_data *data 
  return (void*) NULL;
}

int main(int argc, char *argv[]) {
  srand(time(0));

  int *values = NULL;
  int size = 0;
  
  if (argc !=2) {
    fprintf(stderr, "usage: %s <n>\n", argv[0]);
    fprintf(stderr, "where <n> is the number of values\n");
    return 1;
  }
  size = strtol(argv[1], NULL, 10);

  /*
  thread_array = malloc(nthreads * sizeof(pthread_t)); //
  thread_ids = malloc(nthreads * sizeof(long)); //
  tdata = malloc(nthreads * sizeof(struct thread_data)); // 
*/

  values = malloc(sizeof(int) * size);
  int min = RAND_MAX;
  for (int i = 0; i < size; i++) {
    values[i] = rand() % 10000;
    min = values[i] < min? values[i] : min;
    printf("%d\n", values[i]);
  }

  printf("The min value is %d\n", min);
  pthread_t thread[4];
  struct pthread_data data[4];

  for (int i = 0; i < 4; i++) { 
    pthread_create(&thread[i], NULL, find_min, &data[i]);
  }


  for (int i = 0; i < 4; i++) { 
    pthread_join(threads[i], NULL); 
  }

  int gmin = RAND_MAX;
  for (int i = 0; i < 4; i++) { 
    //simplified version of if statment below: 
      //gmin = data[i].min < gmin? data[i].min : gmin;
    if (data[i].min < gmin) {
      gm`:in = data[i].min;
    }
  }

  free(values);  
}
