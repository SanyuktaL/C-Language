#include<stdio.h>
int main()
{
	int num1,num2,num3,num4,num5,num6,rev;
	int num = 7654321;
	
	num1 = num%10;
	num = num/10;
	
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
	
	
	rev = num1*1000000 + num2*100000 + num3*10000 + num4*1000 + num5*100 + num6*10 +num;
	
	printf("rev %d",rev);
	return 0;
}
