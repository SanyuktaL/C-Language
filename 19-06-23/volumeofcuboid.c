#include<stdio.h>
int main()
{
	int l,b,h,voc;
	printf("enter length");
	scanf("%d",&l);
	printf("enter breadth");
	scanf("%d",&b);
	printf("enter height");
	scanf("%d",&h);
	voc = l*b*h;
	printf("volume of cuboid %d",voc);
	return 0;
	
}
