#include<stdio.h>
int main()
{
	float b,h,area;
	printf("enter base of triangle");
	scanf("%f",&b);
	printf("enter height of triangle");
	scanf("%f",&h);
	area = (b * h)/2;
	printf("area of triangle %f",area);
	return 0;
}
