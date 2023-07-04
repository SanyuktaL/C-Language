#include<stdio.h>
int main()
{
	int a,b,c,ans;
	scanf("%d %d %d",&a,&b,&c);
	ans = -(b-c)*(c-a)*(a-b);
	printf("ans %d",ans);
	return 0;
}
