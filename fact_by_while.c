#include <stdio.h>

int main() {
    int num,i=1,fact=i;
  printf("Enter number");
  scanf("%d",&num);
  while(i<=num){
      
      fact=fact*i;
      i++;
  }
  printf("Factorial of the given number is:%d",+fact);
    return 0;
}
