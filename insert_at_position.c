#include<stdio.h>
int main()
{
int a[10],i,pos,val;
for(i=0;i<9;i++)
{
printf("Enter Number");
scanf("%d",&a[i]);
}
printf("Enter the position to insert");
scanf("%d",&pos);
printf("\nEnter the value to insert");
scanf("%d",&val);
printf("\nOriginal array is:");
for(i=0;i<9;i++)
printf("%d\t",a[i]);
for(i=8;i>=pos-1;i--)
a[i+1]=a[i];
a[pos-1]=val;
printf("\nUpdated array is:");
for(i=0;i<10;i++)
printf("%d\t",a[i]);
return 0;
}
