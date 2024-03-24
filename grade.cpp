#include <stdio.h>

int main() {
   int marks;
   printf("Enter the marks of students");
   scanf("%d",&marks);
  { 
   if (marks>90)
   {
       printf("Grade A");
       
   }
   if(marks>=80 && marks<=89)
   {
       printf("Grade B");
   }
     if(marks>=70 && marks<=79)
   {
       printf("Grade C");
       
   }
    if(marks>=60 && marks<=69)
   {
       printf("Grade D");
   }
     if(marks<=60)
   {
       printf("Grade F");
   }
  
   
    return 0;
}
}
