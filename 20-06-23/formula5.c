#include<stdio.h>
int main()
{
	int a,b,c,ans;
	printf("enter a ");
	scanf("%d",&a);
	printf("enter b ");
	scanf("%d",&b);
	printf("enter c ");
	scanf("%d",&c);
	ans= (a*a+b*b+c*c)+2*(a*b+b*c+c*a);
	printf("ans %d",ans);
	return 0;
	
}
