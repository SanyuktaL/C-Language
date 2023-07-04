#include<stdio.h>
int main()
{
	int a,b,c,sum;
	printf("enter a, b, c, ");
	scanf("%d %d %d",&a,&b,&c);
	sum = a+b+c;
	printf("%d ",sum);
	
	 if(sum<=180)
	 {
	 	printf("triangle is valid");
	 }
	 else 
	 {
	 	printf("triangle is not valid");
	 }
	 return 0;
}
