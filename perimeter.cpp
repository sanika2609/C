#include <stdio.h>

int main() {
 int l,b;
 int perimeter;
 printf("Enter the length of rectangle");
 scanf("%d",&l);
  printf("Enter the breadth of rectangle");
 scanf("%d",&b);
 perimeter=2*(l+b);
 printf("perimeter of the rectangle is:%d",perimeter);
    return 0;
}
