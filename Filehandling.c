#include<stdio.h>
#include<stdlib.h>
int main()
{
FILE* fptr;
fptr=fopen("file.txt","w");
if(fptr==NULL)
{
printf("this file is not opened");
exit(0);
}
else
{
printf(" this file created successfully");
}
return 0;
}
