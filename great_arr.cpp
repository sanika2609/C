#include <stdio.h>

int main() {
    int i,a[]={10,50,30};
    
    {
        if(a[0]>a[1] && a[0]>a[2])
        {
          printf("The greter value is:%d",a[0]);
        }
       else if(a[1]>a[0] && a[1]>a[2])
        {
           printf("The greater value is:%d",a[1]);
        }
       else if(a[2]>a[0] && a[2]>a[1])
        {
            printf("The greater value is:%d",a[2]);
        }
        else
        {
        printf(".......");
        }
    }
    

    return 0;
}
