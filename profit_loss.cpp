#include <stdio.h>

int main() {
    int cp,sp;
    printf("Enter the cost price");
    scanf("%d",&cp);
    printf("Enter the selling price");
    scanf("%d",&sp);
    if(cp<sp)
    {
        printf("profit");
    }
   else
   {
       printf("loss");
   }
    return 0;
}
