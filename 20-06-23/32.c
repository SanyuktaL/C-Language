#include<stdio.h>
int main()
{
	int a,b,c,ans;
	scanf("%d %d %d",&a,&b,&c);
	ans = (a+b)*(b+c)*(c+a);
	printf("ans %d",ans);
	return 0;
}
