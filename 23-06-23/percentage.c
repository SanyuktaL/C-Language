#include<stdio.h>
int main()
{
	int roll,p,c,ca,tot;
	int marks = 300;
	float per;
	char name[20];
	char div[10];
	printf("enter roll no. ");
	scanf("%d",&roll);
	printf("enter name :");
	scanf("%s",&name);
	printf("enter marks of phy, chem, computer application ");
	scanf("%d %d %d",&p,&c,&ca);
	tot = p+c+ca;
	printf("%d ",tot);
	per = (tot/marks)*0.01;
	printf("%f ",per);	
	
	if(per>= 60)
	{
		printf("first");
	}
	else if(per<60 && per>=45 )
	{
		printf("second");
	}
	else
	{
		printf("pass");
	}
	
	
	return 0;
}
