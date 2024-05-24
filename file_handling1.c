#include<stdio.h>
int main(){
char name[50];
int i,marks,num;
printf("Enter the number of students");
scanf("%d",&n);
FILE *fptr;
fptr=(fopen("C:\\student.txt","a"));
if(fptr==NULL)
{
printf("Error");
exit(1);
}
for(i=0;i<num;++i)
{
printf("For student %d\n Enter name",i+1);
scanf("%s",name);
printf("Enter marks");
scanf("%d",marks);
fprintf(fptr"\n name:%s \n marks:%d\n",name,marks);
}
fclose(fptr);
return 0;
}
