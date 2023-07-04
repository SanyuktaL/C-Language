#include<stdio.h>
int main()
{
	int s1,s2,s3;
	printf("enter sides ");
	scanf("%d %d %d",&s1,&s2,&s3);
	
	 if(s1==s2 && s2==s3)
	 {
	 	printf("it is an equilateral triangle");
	 }
	 else if(s1==s2 || s2==s3 || s3==s1)
	 {
	 	printf("it is a isoceles triangle");
	 }
	 else 
	 {
	 	printf("it is an scalene triangle");
	 }
	return 0;
}
