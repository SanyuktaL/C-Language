#include<stdio.h>
int main()
{
	int i,j,n;
	printf("enter no ");
	scanf("%d",&n);
	printf("%d \n",n);
	for(i=1;i<=8;i++)
	{
		for(j=1;j<=10;j++)
		{
		printf("%d*%d=%d ",i,j,(j*i));
		
		}
		printf("\n");
	}
	return 0;

}
