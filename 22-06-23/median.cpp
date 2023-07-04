#include<stdio.h>
int main()
{
	int num1,num2,num3,median;

	printf("enter num1,num2,num3 ");
	scanf("%d %d %d",&num1,&num2,&num3);
	median = (num1+num2+num3)/3;
	printf(" median %d",median);
	
	return 0;
}
