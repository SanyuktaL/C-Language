#include<stdio.h>
int main()
{
	int a,b,x,ans;
	printf("enter a,b,c");
	scanf("%d %d %d",&a,&b,&x);
	
	
	ans = x*x + (a+b)*x + a*b;
	printf("ans %d",ans);
	return 0;
}
