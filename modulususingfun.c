//modulus using functions
#include<stdio.h>
int modulus(int, int);
int main()
{
	int a,b,x;
	a=10;
	b=2;
	printf("enter two numbers");
	scanf("%d,%d",&a,&b);
	x=modulus(a,b);
	printf("modulus is %d",x);
	return 0;
}
int modulus(int a,int b)
{
	int x;
	x=a%b;
	return x;
}
