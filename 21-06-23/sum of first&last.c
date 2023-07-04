#include<stdio.h>
int main()
{
	int first,last,sum,num;
	printf("enter numbers to add");
	scanf("%d",&num);
	last = num%10;
	while(num>10)
	{
	num=num/10;
	}
	first = num;
	sum = first + last;

	printf("sum %d",sum);
	return 0;
}
