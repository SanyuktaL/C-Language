//Write a C program to check whether a number is a palindrome or not.
#include<stdio.h>
int main()
{
	int sum=0,r,n,t;
	printf("enter no ");
	scanf("%d",&n);
	for (t=n;n!=0;n=n/10)
	{
		r = n % 10;
		sum = sum * 10 + r;
	}
	if(t == sum)
	{
		printf("%d is palindrome no.",t);
		
	}
	else
	{
		printf("%d is not a palindrome no.",t);
	}
	return 0;
}
