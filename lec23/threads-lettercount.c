#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <unistd.h>

struct thread_data {
  FILE* fp;
  int id;
};

pthread_mutex_t mutex;
unsigned long long lettercount = 0;

void *start(void* userdata) {
  struct thread_data* data = (struct thread_data*) userdata;
  int count = 0;
  char buffer[1024];

  // todo
  char *line = fgets(buffer, 1024, data->fp);

  while (line != NULL) {
    printf("%d) %s\n", data->id, line);
    for (int i = 0; buffer[i] != '\0'; i++) {
      if (buffer[i] >= 'a' && buffer[i] <= 'z') {
        count++;
      }
    } 
    line = fgets(buffer, 1024, data->fp);
  }
  pthread_mutex_lock(&mutex);
  lettercount += count;
  pthread_mutex_unlock(&mutex);
  return 0; 
}

int main() {
  FILE* fp = fopen("tolstoy.txt", "r");
  if (!fp) {
    printf("Cannot open file!\n");
    exit(1);
  }

  pthread_t threads[4];
  struct thread_data data[4];
  pthread_mutex_init(&mutex, NULL);
  for (int i = 0; i < 4; i++) {
    data[i].fp = fp;
    data[i].id = i;
    pthread_create(&threads[i], NULL, start, &data[i]); 
  }

  for (int i = 0; i < 4; i++) {
    pthread_join(threads[i], NULL); 
  }
  printf("count = %llu\n", lettercount);
  pthread_mutex_destroy(&mutex); 

  fclose(fp);
  return 0; 
}
