//Write a C program to display the sum of n terms of even natural numbers.
#include<stdio.h>
int main()
{
	int n,i,sum = 0;
	scanf("%d",&n);
	for(i=2;i<=n;i+=2)
	{
		sum = sum+i;
	}
	printf("%d %d",n,sum);
	return 0;
}
