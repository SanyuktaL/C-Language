#include<stdio.h>
int main()
{
	int unit,total;
	printf("enter unit ");
	scanf("%d",&unit);
	
	if(unit<=100)
	{
		total = unit*0;
		printf("no bill %d",total);
	
	}
	else if (unit>100 && unit <= 200)
	{
		total = 0+(unit - 100)*5;
		printf("bill is %d",total);
	}
	else if (unit>=200)
	{
		total = 0+(100*5)+(unit-200)*10;
		printf("bill is %d",total);
	}
	
	return 0;
}
