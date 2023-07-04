#include<stdio.h>
int main()
{
	int height;
	printf("enter height ");
	scanf("%d",&height);
	if(height>=135 && height<=140)
	{
		printf("the person is dwarf");
	}
	else
	{
		printf("the person is tall");
	}
	return 0;
}
