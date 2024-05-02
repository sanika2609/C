#include <stdio.h>
#include <stdlib.h>
void* my_malloc(size_t size) {
  void* ptr = malloc(size);
  if(!ptr) {
    printf("Memory allocation failed\n");
    return NULL;
  }
  return ptr;
}
int main() {
  
  int* ptr = (int*)my_malloc(sizeof(int));
  
  if(ptr) {
    *ptr = 100;
    printf("Value at ptr = %d", *ptr);
  }
  return 0;
