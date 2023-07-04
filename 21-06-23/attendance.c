#include<stdio.h>
int main()
{
	int noh,noa,attend;
	printf("enter no. of classes held ");
	scanf("%d",&noh);
	printf("enter no. of classes attended");
	scanf("%d",&noa);
	
	attend = (noa*100)/noh;
	printf(" %d ",attend);
	if (attend>75)
	{
		printf("allow to sit in exam ");
	}
	else
	{
		printf("not allow to sit in exam ");
	}

	return 0;
}
