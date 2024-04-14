#include <stdio.h>

int main() {
   int i,a[]={10,15,20};
   int j,b[]={};
   for(i=0;i<=2;i++)
   {
   a[i]=b[i];
   }
       printf("The first array is:");
       {
           for(i=0;i<=2;i++)
           printf("%d",a[i]);
       }
       printf("The copied array is:");
       {
           for(i=0;i<=2;i++)
           
               printf("%d",b[i]);
           
       }
   
    return 0;
}
