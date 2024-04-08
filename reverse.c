#include <stdio.h>

int main()
{
    int i, n;

    printf("Enter value of n");
    scanf("%d", &n);

    printf("Natural Numbers in Reverse Order Upto %d ",n);

    for(i=n; i>=1; i--)
    {
        printf("\t%d", i);
    }

    return 0;
}
