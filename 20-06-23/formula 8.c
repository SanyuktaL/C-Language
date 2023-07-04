#include<stdio.h>
int main()
{
	int a,b,ans;
	printf("enter a, b ");
	scanf("%d %d",&a ,&b);
	ans = a*a*a + 3*a*a*b + 3*a*b*b + b*b*b;
	printf("ans %d",ans);
	return 0;
	
}
