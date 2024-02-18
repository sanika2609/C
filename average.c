#include<stdio.h>
int main()
{
    int a,b,c,avg,sum;
    printf("Enter the a");
    scanf("%d",&a);
     printf("Enter the b");
    scanf("%d",&b);
     printf("Enter the c");
    scanf("%d",&c);
    sum=a+b+c;
    printf("sum of the three number is:%d",sum);
    avg=sum/3;
    printf("the average of three numbers is:%d",avg);
    return 0;
}
