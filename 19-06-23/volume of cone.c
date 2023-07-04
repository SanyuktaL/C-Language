#include<stdio.h>
int main()
{
	float pi=3.14;
	int r,h,voc;
	printf("enter the radius");
	scanf("%d",&r);
	printf("enter the height");
	scanf("%d",&h);
	voc = (3.14*r*r*h)/3;
	printf("volume of cube %d",voc);
	return 0;
}
