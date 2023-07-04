#include<stdio.h>
int main()
{
	int age,a,b,c;
	printf("enter age");
	scanf(" %d %d %d",&a,&b,&c);
	if(a>b)
	{
		printf("a is older ");
	}
	else if(b>c)
	{
		printf("b is older");
	}
	else if(c>a)
	{
		printf("c is older");
	}
	else 
	{
		printf("c is younger");
	}
	return 0;
}
