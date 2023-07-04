#include<stdio.h>
int main()
{
	int a,b,ans;
	scanf("%d %d",&a,&b);
	ans = (a*a+2*a*b+b*b)*(a*a-2*a*b+b*b);
	printf("ans %d",ans);
	return 0;
}
