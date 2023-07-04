#include<stdio.h>
int main()
{
	int a,b,c,ans;
	scanf("%d %d %d",&a,&b,&c);
	ans = 1/2*(a+b+c)*((a*a-2*a*b+b*b)*(b*b-2*b*c+c*c)*(c*c-2*c*a+a*a));
	printf("ans %d",ans);
	return 0;
	
}
