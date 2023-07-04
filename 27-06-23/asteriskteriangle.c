//Write a C program to display a pattern like a right angle triangle with a number.
#include<stdio.h>
int main()
{
	int i,j;
	
	for(i=1;i<=5;i++) 
	{
		for(j=1;j<=i;j++)
		
		printf(" * ",j);
		printf("\n");
	}
	
	return 0;
}
