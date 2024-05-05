#include <stdio.h>
#include<string.h>
struct student {
    char name[20];
    int roll_no;
    char address[20];
    char branch[200];
};
int main(){
    struct student obj;
    strcpy(obj.name,"sanika_pawar");
    obj.roll_no=31;
     strcpy(obj.address,"ambavade");
      strcpy(obj.branch,"computer science engineering & Artificial intilegence");
      printf("name:%s\n",obj.name);
      printf("roll_no:%d\n",obj.roll_no);
      printf("address:%s\n",obj.address);
      printf("branch:%s\n",obj.branch);
    return 0;
}
