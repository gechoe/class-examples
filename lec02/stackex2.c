#include <stdio.h>
#include <string.h>

void print(const char* str) {
  int n = strlen(str);
  for (int i = 0; i < n; i++) {
    printf("%c-", str[i]);  
  }
  printf("\n");
}

int main() {
  const char* greeting = "hello";
  print(greeting);
  return 0;
}
