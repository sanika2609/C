#include <stdio.h>

int main() {
    int a,b,c;
    printf("Enter the value of a,b,c");
    scanf("%d%d%d",&a,&b,&c);
    if(a+b>c && b+c>a && c+a>b)
    {
        printf("This is the sides of the triangle");
    }
    else
    {
        printf("This is not sides of the triangle");
    }
    return 0;
}
