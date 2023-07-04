#include<stdio.h>
int main()
{
	int rem1,rem2,rem3,rem4,rev;
	int num=45678;
	
	rem1 = num%10;
	num = num/10;
	
	rem2 = num%10;
	num = num/10;
	
	rem3 = num%10;
	num = num/10;
	
	rem4 = num%10;
	num = num/10;
	
	rev = rem1*10000 + rem2*1000 + rem3*100 +rem4*10 + num;
	printf("rev of digit %d",rev);
	return 0;
}
