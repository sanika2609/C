#include <stdio.h>

int main() {
    int num1,num2;
    printf("Enter the num1");
    scanf("%d",&num1);
     printf("Enter the num2");
    scanf("%d",&num2);
    if(num1>num2)
    {
    printf("The greatest number is:%d\n",num1);
    }
    else
    {
        printf("The greatest number is:%d\n",num2);
    }

    return 0;
}
