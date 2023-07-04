#include<stdio.h>
int main()
{
	int p,q,r,x,ans;
	scanf("%d %d %d %d",&p,&q,&r,&x);
	ans = x*x*x+(p+q+r)*x*x+(p*q+q*r+r*p)*x+p*q*r;
	printf("ans %d",ans);
	return 0;
}
