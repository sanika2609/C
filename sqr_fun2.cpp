#include <stdio.h>
int square(int num){
    
   
     return num*num;
}

int main() {
   int num;
   printf("Enter any number");
   scanf("%d",&num);
  square(num);
   printf("The square of the given number is:%d",num*num);

    return 0;
}
