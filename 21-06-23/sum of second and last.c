#include<stdio.h>
int main()
{
	int num1,num2,num3,num4,num5,num6,num7,sum;
	int num = 7654321;
	
	num1 = num%10;
	num= num/10;
	
	num2 = num%10;
	num = num/10;
	
	num3 = num%10;
	num = num/10;
	
	num4 = num%10;
	num = num/10;
	
	num5 = num%10;
	num = num/10;
	
	num6 = num%10;
	num = num/10;
	
	num7 = num%10;
	num = num/10;
	
	sum = num2 + num6;
	printf("sum %d",sum);
	return 0;
	
	
}
