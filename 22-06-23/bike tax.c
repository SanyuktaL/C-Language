#include<stdio.h>
int main()
{
	int cp,tax,cost;
	printf("enter cp ");
	scanf("%d",&cp);
	if(cp >= 100000)
	{
		tax = cp*0.15;
	}
	else if(cp >= 50000 && cp <= 100000)
	{
		tax = cp*0.10;
	}
	else if (cp < 50000)
	{
		tax = cp*0.05;	
	}
	cost = cp+tax;
	printf(" tax %d ",tax);
	printf(" cost %d ",cost);
	return 0;
}
