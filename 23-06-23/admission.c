#include<stdio.h>
int main()
{
	int phy,maths,chem,total;
	printf("enter marks in maths, ");
	printf("enter marks in phy, ");
	printf("enter marks in chem, ");
	scanf("%d %d %d",&maths,&chem,&phy);
	total = phy + maths + chem;
		printf("pcm %d",total);	
	total = phy+maths;
	printf("\npm %d",total);
	

	if(maths>=65)
	{
		if(phy>=55)
		{
			if(chem>=50)
			{
				if((phy+maths+chem)>=190 || (phy+maths)>= 140)
				{
					printf("candidate is eligible for admission ");
				}
				else
				{
					printf("candidate is not eligible for admission ");
				}
			}
			else
			{
				printf("candidate is not eligible for admission");
			}
		}
		else
		{
			printf("candidate is not eligible for admission");
		}
	}
	else
	{
		printf("candidate is not eligible for admission ");
	}
	return 0;
}
