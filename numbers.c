#include<stdio.h>
int main()
{
    int num;
    printf("Enter the num");
    scanf("%d",&num);
   
    if(num>0)
    {
        printf("num is positive\n");
    }
    else if(num<0)
    {
        printf("num is negative\n");
        
    }

    else
    {
        printf("num is zero\n");
    }
    return 0;
}
