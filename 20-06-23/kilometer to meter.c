#include<stdio.h>
int main()
{
	float km;
	int m;
	printf("enter kilometer");
	scanf("%f",&km);
	m = km*1000;
	printf("converted to meter %d",m);
	return 0;
}
