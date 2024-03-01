#include<stdio.h>
int main()
{
    int a=5;
    int b=6;
    a=a+b;
    
    b=a-b;
    printf("The value of b is:%d\n",b);
    a=a-b;
    printf("The value of a is:%d",a);
}
