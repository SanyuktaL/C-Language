#include<stdio.h>
int main()
{
	int rem1 , rem2, rev;
	int num=123;
	
	rem1 = num%10;
	num = num/10;
	
	rem2 = num%10;
	num = num/10;
	
	rev = rem1*100 + rem2*10 + num;
	printf(" reverse of digit %d ",rev);
	return 0;
}
