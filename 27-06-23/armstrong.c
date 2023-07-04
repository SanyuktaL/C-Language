//  Write a C program to check whether a given number is an Armstrong number or not.
#include<stdio.h>
int main()
{
	int n,r,temp,sum=0;
	printf("enter any no. ");
	scanf("%d",&n);
	
	for(temp=n;n!=0;n=n/10)
	{
		r = n % 10;
		sum = sum+(r*r*r);
		
	}
	if(sum == temp)
	{
		printf("%d number is armstrong",temp);
	}
	else
	{
		printf("%d number is not armstrong",temp);
	}
	return 0;
}
