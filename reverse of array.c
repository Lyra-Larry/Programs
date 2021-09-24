//reverse of an array
#include<stdio.h>
int main()
{
	int a[100],reverse[100],i,n;
	printf("enter the number of elements");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",& a[i]);
	}
	for(i=0;i<n;i++)
	{
	reverse[i]=a[n-i-1];	
	}
	
	printf("on reversing,the array elements we get");
	for(i=0;i<n;i++)
	{
		printf("&d",reverse[i]);
	}
	
	}
