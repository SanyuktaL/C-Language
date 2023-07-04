#include<stdio.h>
int main()
{
	char ch;
	printf("enter a caharcter ");
	scanf("%c",&ch);
	
	if(ch=='a'|| ch=='e'||ch=='i'||ch=='o'||ch=='u')
	{
		printf("this is a vowel");
	}
	else if(ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
	{
		printf("this is a vowel");
	}
	else
	{
		printf("this is a consonant ");
	}
	return 0;
}
