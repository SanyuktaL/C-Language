#include<stdio.h>
int main()
{
	int n,i,ans=0;
	printf("enter n ");
	scanf("%d",&n);
	
	for(i=0;i<=n;i++)
	{
		ans = ans+i;
	}
	printf("%d",ans);
	return 0;
}
