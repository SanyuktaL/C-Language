#include<stdio.h>
int main()
{
	int arr1[10] = {1,2,3,4,5,6,7,8,9},arr2[10];
	int i,n=9;
	scanf("%d",&n);
	printf("%d",n);
	for(i=0;i<n;i++)
	{
		arr2[10]=arr1[10];
	}
	for(i=0;i<n;i++)
	{
		printf("%d",arr1[10]);
	}
	for(i=0;i<n;i++)
	{
		printf("%d",arr2[10]);
	}
	
	return 0;
}
