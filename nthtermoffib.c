//power using recursion
#include<stdio.h>
int power(int,int);
int main()
{
	int a,b,result;
	printf("enter base number");
	scanf("%d",&a);
	printf("enter an exponent");
	scanf("%d",&b);
	result=power(a,b);
	printf("%d^%d = %d",a,b,result);
	return 0;
}
int power(int a,int b);
{
	if(b!=0)
	return(base*power(base,a-1));
	else
	return 1;
}
