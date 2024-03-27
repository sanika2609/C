#include <stdio.h>
void swap(int* a,int* b){
     int temp;
     temp=*a;
     *a=*b;
     *b=temp;
     return;
}
int main() {
    int a=5;
    int b=4;
  swap(&a,&b);
   printf("The values of a after swapping is:%d\n",a);
   printf("The values of b after swapping is:%d\n",b);
    return 0;
}
