#include<stdio.h>
int main()
{
	float median;
	int a,b,c;

	printf("enter a, b, c ");
	scanf("%d %d %d",&a,&b,&c);
	median = sqrt(2*b*b+2*c*c-a*a)/2;
	printf(" median %f",median);
	
	return 0;
}
