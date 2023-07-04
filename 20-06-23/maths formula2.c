#include<stdio.h>
int main()
{
	int a,b,ans;
	printf("enter a ");
	scanf("%d",&a);
	printf("enter b ");
	scanf("%d",&b);
	ans = a*a+2*a*b-b*b;
	printf(" ans %d",ans);
	return 0;
}
