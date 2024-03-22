            #include <stdio.h>

 
  float areaOfcircle(float radius_circle);

  int main() {
    int radius;

   
    printf("Enter the radius of circle : ");
    scanf("%d", &radius);

    printf("Area of circle : %f", areaOfcircle(radius));
    printf("\n");

   return 0;
}


float areaOfcircle(float radius_circle){
   float area_circle;
   area_circle = 3.14 * radius_circle * radius_circle;

   return area_circle;
}
