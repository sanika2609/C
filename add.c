#include<stdio.h>
int add(int a,int b)
{
	int c=a+b;
	
	return c;
		
}
int main(){
	int p=5 ; int q=6;int r;
	r=add(p,q);
	printf("Addition of p and q is:%d",r);
	return 0;
	
}
