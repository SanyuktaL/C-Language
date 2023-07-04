#include<stdio.h>
int main()
{
	int age;
	printf("enter age ");
	scanf("%d",&age);
	if(age>=18 || age>=21)
	{
	printf("candidate is eligible for voting ");	
	} 
	else
	{
		printf("candidate is not eligible for voting ");
	}
	return 0;
}
