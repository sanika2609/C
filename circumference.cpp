#include <stdio.h>

int main() {
   float circumference;
   float pie=3.14;
   int r;
   printf("Enter the radius of circle");
   scanf("%d",&r);
   circumference=2*pie*r;
   printf("circumference of the circle is:%f",circumference);
    return 0;
}
