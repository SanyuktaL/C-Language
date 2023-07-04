//Write a program in C to store elements in an array and print them.
#include<stdio.h>
int main()
{
	int i,a[10];
	
	 for(i=0;i<10;i++)
	{
	  scanf("%d",&a[i]);	
	 }
	for(i=0;i<10;i++)
	{
		printf("%d",a[i]);
	}
	
	
	return 0;
}
