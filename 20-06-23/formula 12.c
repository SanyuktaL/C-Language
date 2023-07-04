#include<stdio.h>
int main()
{
	int a,b,ans;
	printf("enter a,b ");
	scanf(" %d %d",&a,&b);
	ans = (a+b)*(a*a-a*b+b*b);
	printf("ans %d",ans);
	return 0;
}
