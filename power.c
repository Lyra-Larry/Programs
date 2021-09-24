//a raised to the power b 
#include<stdio.h>
int main()
{
	int a,b,i,power;
	printf("to find a raised to the power b give value of a ");
	scanf("%d",&a);
	printf("give value of b");
	scanf("%d",&b);
	for(i=1;i<=b;i++)
	{
		power=power*a;
	}
	printf("power of a'%d' raise to the b'%d' is %d",a,b,power);
	return 0;
	
}

