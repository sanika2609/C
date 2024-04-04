#include <stdio.h>
int cube(int);

int main() {
   int n;
   printf("Enter the number");
   scanf("%d",&n);
 
   cube(n);
  
    return 0;
}
int cube(int n){
 int cube=n*n*n;
  printf("The cube of %d is :%d",n,cube);
  return cube;
}
