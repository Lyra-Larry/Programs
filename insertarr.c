//insert an element in array
#include<stdio.h>
int main()
{
	int arr[100],c ,value,n,position;
	printf("enter number of elements in array\n");
	scanf("\n%d",&n);
	printf("enter %d elements\n",n);
	for(c=0;c<n;c++)
	scanf("&d",& arr[c]);
	printf("enter  position where you wish to insert an element\n ");
	scanf("%d",&position);
	printf("enter the value to insert");
	scanf("%d",&value);
	{
		for(c=n-1;c>=position-1;c--)
		arr[c+1]=arr[c];
		arr[position-1]=value;
		printf("resultant array\n");
		for(c=0;c<=n-1;c++)
		printf("%d\n",arr[c]);
	}
	return 0 ;	
}
