#include<stdio.h>
int main()
{
	int a,b,ans;
	printf("enter a,b ");
	scanf(" %d %d",&a,&b);
	ans = a*a*a- b*b*b -3*a*b*(a-b);
	printf("ans %d ",ans);
	return 0;
}
