#include<stdio.h>
int main()
{
	int x,y;
	printf("enter x coordinate, enter y coordnate ");
	scanf("%d %d",&x,&y);
	if(x>0 && y>0)
	{
		printf("coordinate lies in 1st quadrant");
	}
	else if(x>0 && y<0)
	{
		printf("coordinate lis in 2nd quadrant ");
	}
	else if(x<0 && y<0)
	{
		printf("coordinate lies in 3rd quadrant ");
	}
	else if (x<0 && y>0)
	{
		printf(" coordinate lies in 4th quadrant ");
	}
	return 0;
	
}
