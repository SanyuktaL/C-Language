#include<stdio.h>
int main()
{
	int n,i,sum=0, avg;
	printf("enter 10 no. ");

	
	for(i=1;i<=10;i++)
	{
		
		scanf("%d\n",&n);
		sum = sum+n;
	
	}
	avg= sum/10;
	printf("%d\n %d",sum,avg);
	return 0;
}
