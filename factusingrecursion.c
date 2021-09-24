//factorial using recursion
#include<stdio.h>
int factorial(int);                //prototype or funtion declaration
int main()
{
int n,fact;
printf("\nenter the number");
scanf("\n%d",&n) ;
fact=factorial(n);                 //function call
printf("\nfactorial of %d, %d",n,fact);
}
int factorial(int n)                //function definition
{
	int temp;
	if(n==1)
	return 1;
	else
	{
		temp=n*factorial(n-1);
		return temp;
	}

}
