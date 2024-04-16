#include <stdio.h>

int main() {
    int a[]={5,10,15};
    if(a[0]<a[1] && a[0]<a[2])
    {
        printf("The minimum number is:%d",a[0]);
    }
   else if(a[1]<a[0] && a[1]<a[2])
   {
       printf("The minimum number is:%d",a[1]);
   }
   else if(a[2]<a[0] && a[2]<a[1])
   {
       printf("The minimum number is:%d",a[2]);
   }
   else
   {
       printf("......");
       }
       return 0;
       }
