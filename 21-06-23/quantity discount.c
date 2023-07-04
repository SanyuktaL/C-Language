#include<stdio.h>
int main()
{
	int total,qty,ta,dis;
	printf("enter quantity");
	scanf("%d",&qty);
	total = qty*100;
	
	if(total>1000)
	{
		dis = total*0.01;
	}
	else
	{
		dis = 0;
	}
	ta = total-dis;
	printf("total amount will be %d",ta);
	return 0;
}
