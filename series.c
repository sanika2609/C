#include<stdio.h>
int main()
{
    int num,i,series;
    printf("Enter the number which you want series");
    scanf("%d",&num);
   for(i=1;i<=10;i++)
  series= num*i;
   printf("%d\n",series);
   
    return 0;
}
