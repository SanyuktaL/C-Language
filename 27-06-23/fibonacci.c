//Write a program in C to display the first n terms of the Fibonacci series.
#include<stdio.h>
int main()
{
	int n1=0,n2=1,n3,i,num;
	printf("enter numbers");
	scanf("%d",&num);
	printf("%d %d ",n1,n2);
	for (i=2;i<num;i++)
	{
		n3 = n2+n1;
		printf("%d ");
		n1=n2;
		n2=n3;
	}
	return 0;
	
}
