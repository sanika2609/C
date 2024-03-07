#include <stdio.h>

int main() {
    int  m1,m2,m3,total_marks;
    float avg,percentage;
    printf("Enter the marks in m1");
    scanf("%d",&m1);
      printf("Enter the marks in m2");
    scanf("%d",&m2);
      printf("Enter the marks in m3");
    scanf("%d",&m3);
   { 
    total_marks=m1+m2+m3;
   }
    printf("Total marks of the student is:%d\n",total_marks);
    {
       avg=total_marks/3;
   }
    printf("average of marks is:%f\n",avg);
   {
      percentage=(total_marks/300.0)*100;
   }
    printf("The percentage will get by student is:%f\n",percentage);
    
    
    return 0;
}
