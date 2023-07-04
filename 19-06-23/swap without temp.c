#include<stdio.h>
int main()
{
	int x,y;
	printf("enter value for x");
	scanf("%d",&x);
	printf("entaer value for y");
	scanf("%d",&y);
	x=x-y;
	y=x+y;
	x=y-x;
	printf("values after swap x=%d , y=%d",x,y);
	return 0;
}
