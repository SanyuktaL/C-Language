#include<stdio.h>
int main()
{
	int n1,n2,n3;
	printf("enter number1, number2, number3  ");
	scanf("%d %d %d",&n1,&n2,&n3);
	if(n1>n2)
	{
		printf("n1 is greater ");	
	}
	else if(n2>n3)
	{
		printf("n2 is greater ");
	}
	else if(n3>n1)
	{
	printf("n3 is greatest among  three");
	}

	return 0;
}

