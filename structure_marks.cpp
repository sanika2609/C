#include <stdio.h>
struct Student{
    char name[50];
    int age;
    float totalMarks;
    
};
int main(){
    
struct  Student student1,student2;
printf("Input details for student1\n");
printf("name:");
scanf("%s",student1.name);
printf("age:");
scanf("%d",&student1.age);
printf("total Marks:");
scanf("%f",&student1.totalMarks);

printf("Input details for student2\n");
printf("name:");
scanf("%s",student2.name);
printf("age:");
scanf("%d",&student2.age);
printf("total Marks:");
scanf("%f",&student2.totalMarks);

printf("student1 information\n");
printf("name:%s\n",student1.name);
printf("age:%d\n",student1.age);
printf("totalMarks:%2f\n",student1.totalMarks);

printf("student2 information\n");
printf("name:%s\n",student2.name);
printf("age:%d\n",student2.age);
printf("totalMarks:%2f\n",student2.totalMarks);

float average_Marks=(student1.totalMarks + student2.totalMarks)/2;
printf("Average total marks:%2f",average_Marks);

    return 0;
}
