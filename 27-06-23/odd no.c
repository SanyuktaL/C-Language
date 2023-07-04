#include<stdio.h>
int main()
{
	int i,sum=0,n;
	scanf("%d",&n);
	
	for(i=1;i<=10;i++)
	{
		printf("%d ",2*i-1);
		sum = sum + 2*i-1;
	}
	
	printf("%d ",sum);
	return 0;
}
