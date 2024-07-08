#include <stdio.h>

int main() {
   int a[10],i,val,flag=0;
   for(i=0;i<10;i++)
   {
       printf("\nEnter Number");
       scanf("%d",&a[i]);
   }
   printf("\nEnter element to remove");
   scanf("%d",&val);
   printf("\nOriginal is:");
   for(i=0;i<10;i++)
   printf("%d",a[i]);
   for(i=0;i<10;i++)
   {
       if(a[i]==val)
       {
           flag=1;
           break;
       }
   }
   if(flag==0)
   printf("\nElement Not Found");
   else
   {
       for( ;i<9;i++)
       a[i]=a[i+1];
       printf("\nModified array is:");
       for(i=0;i<9;i++)
       printf("%d\t",a[i]);
   }
   
    return 0;
}

