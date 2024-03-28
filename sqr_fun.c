#include <stdio.h>

int square(int num);


int main() {
    int num;
    printf("Enter any number");
    scanf("%d",&num);
    
     printf("\n Square of  %d  =  %d", num, num*num); 
 
    
    int square(int num);{
        return num*num;
    }
    
    return 0;
}
