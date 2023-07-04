#include<stdio.h>
int main()
{
	int l,b;
	printf("enter length and breadth ");
	scanf("%d %d",&l,&b);
	if (l==b)
	{
		printf("it is square ");
	}
	else
	{
		printf("it is rectangle ");
	}
	return 0;
}
