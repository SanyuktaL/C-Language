#include<stdio.h>
int main()
{
	int a,b,ans;
	scanf("%d %d",&a,&b);
	ans = (a/2*a/2+b/2*b/2)-(a/2*a/2+b/2*b/2);
	printf("ans %d",ans);
	return 0;
}
