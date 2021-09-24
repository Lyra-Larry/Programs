//decimal to binary using recursion
#include<stdio.h>    //prototype
void binary(int);
int main()
{
	int n;
	printf("\nenter any number");
	scanf("%d",&n);
	binary(n);        //funtion call
}
void binary (int n)    // funtion definition
{
	if(n==0)
	printf("0");
	else
	{
		binary(n/2);
		printf("%d",n%2);
	}
	
}

