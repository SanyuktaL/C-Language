#include<stdio.h>
int main()
{
	int i,cube;
	printf("enter 4 numbers ");
	scanf("%d",&cube);
	for(i=1;i<=cube;i++)
	{
		printf("enter no %d  cube of %d : %d",i,i,(i*i*i));
		cube = i*i*i;
	
		
		
	}
	
	return 0;
}
