#include <stdio.h>

int main() {
  int n;
  printf("Enter n");
  scanf("%d",&n);
  if(n>=0)
  {
      printf("%d",n);
  }
  else
  {
      printf("%d",-n);
  }
    return 0;
}
