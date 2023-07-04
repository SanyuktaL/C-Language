#include<stdio.h>
int main()
{
	int a,b,c,ans;
	printf("enter a, b, c ");
	scanf("%d %d %d",&a,&b,&c);
	ans = (a*a+b*b+c*c+2*(a*b+b*c+c*a))-(a*a+b*b+c*c+2*(a*b+b*c+c*a)-2*(a*b+b*c+c*a));
	printf("%d ans",ans);
	return 0;
}
