#include<stdio.h>
int main()
{
	int x,y,temp;
	printf("enter any value for swap");
	scanf("%d%d",&x,&y);
	temp=x;
	x=y;
	y=temp;
	printf("values after swap x=%d, y=%d",x,y);
	return 0;
}
