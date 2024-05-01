#include <stdio.h>

int main() {
   int l,b,area,perimeter;
    printf("Enter the length of rectangle");
    scanf("%d",&l);
    printf("Enter the breadth of rectangle");
    scanf("%d",&b);
    area=l*b;
    printf("The area of rectangle is :%d\n",area);
    perimeter=2*(l+b);
    printf("Theperimeter of the rectangle is:%d\n",perimeter);
    if(area>perimeter)
    {
        printf("The area of rectangle is larger than perimeter of rectangle");
    }
    else
    {
        printf("The perimeter of rectangle is larger than the area of rectangle");
    }
    return 0;
}
