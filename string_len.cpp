#include <stdio.h>

int main() {
    printf("Hello welcome to c course");
    char string[50];
    int count;
    printf("Enter the string");
    scanf("%s",string);
    for(count=0;string[count] !='\0';count++);
    printf("The length of string:%d\n",count);
    
    return 0;
}
