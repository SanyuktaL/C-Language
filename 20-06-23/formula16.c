#include<stdio.h>
int main()
{
	int a,b,c,ans;
	printf("enter a,b,&c ");
	scanf("%d %d %d",&a,&b,&c);
	ans = a*a*a + b*b*b + c*c*c +3*(a+b)*(b+c)*(c+a);
	printf("ans %d",ans);
	return 0;
}
