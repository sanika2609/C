#include <stdio.h>

int main() {
   char ch;
   printf("Enter the character");
   scanf("%c",&ch);
   switch(ch)
   {
       case 'M':
       printf("Male");
       break;
       case 'F':
       printf("Female");
       break;
       default :
       printf("Other");
   }
    return 0;
}
