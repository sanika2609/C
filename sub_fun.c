#include<stdio.h>
float sub(float a,float b)
{
	float c=a+b;
	return c;
}
int main(){
	float p=4.5 ; float q=3.5 ;
	float r=sub(p,q);
	printf("Substraction of p and q is:%f",r);
	return 0;
}
