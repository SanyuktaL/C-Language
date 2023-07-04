#include<stdio.h>
int main()
{
	int n;
	printf("enter month no.");
	scanf("%d",&n);
	if(n ==1 || n==3 || n==5 || n==7 || n==8 || n==10 || n==12)
	{
	printf("month have 31 days");	
	}
	else if(n==2)
	{
		printf("month have 28 or 29 days ");
	}
	else if(n==4||n==6||n==9||n==11)
	{
		printf("month have 30 days");
	}
	return 0;
}
