//tower of hanoi using recursion
#include<stdio.h>
void toh(int,char,char,char);
void main()
{
int n;
printf("how many plates");
scanf("&d",&n);
toh(n,'a','b','c');	
}
void toh(int n,char x,char y,char z)
{
	if(n>0)
	{
		toh(n-1,x,y,z);
		printf("\n%c _ >%c",x,y);
		toh(n-1,z,y,x);
	}
}
