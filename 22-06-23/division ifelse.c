#include<stdio.h>
int main()
{
	int input,num,output;
	printf("enter num ");
	scanf("%d",&num);
	
	if(num % 5 == 0)
	{
		printf("divisible by 5\n");
	}
	else 
	{
		printf("not divisible by 5 \n");
	}
	if(num % 11 == 0)
	{
		printf("divisible by 11\n ");
	}
	else 
	{
		printf("not divisible by 11\n ");
	}
	if(num % 15 ==0)
	{
		printf("divisible by 15\n ");
	}
	else
	{
		printf("not divisible by 15\n ");
	}

	return 0;
}
