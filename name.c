#include <stdio.h>

int main() {
   char name[30];
   printf("enter name");
   fgets(name,sizeof(name),stdin);
   printf("Name:");
   puts(name);
    return 0;
}
