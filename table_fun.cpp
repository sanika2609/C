#include<stdio.h>
int table(int);

int main()
{
    int n;
    printf("Enter the n");
    scanf("%d",&n);
            
             table(n);
    return 0;
}
int table(int n){
    int i;
     for(int i=1;i<=10;i++)
      {  
        printf("%d x %d = %d\n", n, i, n*i);  
    }  
}
