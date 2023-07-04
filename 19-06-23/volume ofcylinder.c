#include<stdio.h>
int main()
{
	float pi= 3.14;
	int r,h,voc;
	printf("enter radius");
	scanf("%d",&r);
	printf("enter height");
	scanf("%d",&h);
	voc = 3.14*r*r*h;
	printf("volume of cylinder %d",voc);
	return 0;
	
}
