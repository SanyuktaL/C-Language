#include<stdio.h>
int main()
{
	int sp,cp,profit,loss;
	printf("enter cost price and selling price ");
	scanf("%d %d",&cp,&sp);
	
	if(cp<sp)
	{
		profit = sp-cp;
		printf("you can book your profit %d ",profit);
	}
	else
	{
		loss = cp-sp;
		printf("you are in loss ",loss);
	}
	return 0;
}
