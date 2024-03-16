#include<stdio.h>
int mult(int a,int b){
	int c=a*b;
	return c;
}
int main(){
	int p=5 ; int q=6; int i=4; int j=7;
	int r=mult(p,q);
	printf("Multiplication of the p and q is:%d",r);
	int k=mult(i,j);
	printf("multiplication of i and j is:%d",k);
	return 0;
	
}
