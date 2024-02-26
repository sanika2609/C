#include<stdio.h>
#include<string.h>
typedef struct
{
        char name[20];
        int age;
        }person;
        typedef struct
        {
                person p;
                int Roll_no;
                float marks;
                }student;
                int main()
                {
                    person p1={"sanika",20};
                    student s1={p1,31,50.5};
                    
                    printf("name of the student is:%s\n",s1.p.name);
                    printf("age of the student is:%s\n",s1.p.age);
                    printf("Roll_no of student is:%s\n",s1.Roll_no);
                    printf("marks of the student is:%f\n",s1.marks);
                    return;
                    }
