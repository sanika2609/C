#include<math.h>
int fact(int);
int main()
{
    int num;
    printf("Enter the number which you have factorial");
    scanf("%d",&num);
   fact(num);
   
    return 0;
}
int fact(int num)
{
    int i,fact=1;
    for(int i=1;i<=num;i++)
    
        fact=fact*i;
        
         printf("The factorial %d is:%d",num,fact);
        
    return fact;
}
