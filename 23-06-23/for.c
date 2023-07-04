#include<stdio.h>
int main()
{
	int i,ans = 0;
	printf("enter no.");
	scanf("%d",&i);
	for(i= 1;i<=10;i++)
	{
		ans = ans+i;
		printf("%d",i);
		
	}
	return 0;
}
