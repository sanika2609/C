#include<stdio.h>
int main()
{
    int age;
    printf("Enter the age");
    scanf("%d",&age);
    if(13>age>0)
    {
                printf("Children");
                }
                else if(13<age<20)
                {
                     printf("Teenager");
                     }
                     else if(20<age<46)
                     {
                          printf("Adult");
                          }
                          else if(age>45<65)
                          {
                               printf("Mature");
                               }
                               else
                               {
                                   printf("Old");
                                   }
                                   return 0;
                                   }
