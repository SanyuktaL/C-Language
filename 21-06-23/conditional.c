#include<stdio.h>
int main()
{
	int sal;
	int yos;
	printf("enter salary ");
	scanf("%d",&sal);
	printf("enter year of service ");
	scanf("%d",&yos);
	sal = sal*0.05;
	if(yos<=5)
	{
	printf("eligible for bonus");
	printf("\n the net bonus amount will be %d ",sal);	
	}
	else
	{
		printf("not eligible for bonus");
	}
		
	return 0;
	
}
