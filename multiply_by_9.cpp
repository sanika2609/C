#include
#include
void main()
{
int n;
printf(“Enter a number:”);
scanf(“%d”,&n);
printf(“%d”, (n<<3)+n);
getch();
}
2. How to measure the size of any variable without “sizeof” operator?
Answer:
#define size_of(x) ((char *)(&x+1) – (char *)&x)
void main()
{
Short int x;
Printf(“%d”,size_of(x));
}
