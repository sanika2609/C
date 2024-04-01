#include <stdio.h>

int main() {
    int num,fact=1;
    printf("Enter the number which you have factorial");
    scanf("%d",&num);
    for(int i=1;i<=num;i++)
    fact=fact*i;
    printf("The factorial %d is:%d",num,fact);
    return 0;
}
