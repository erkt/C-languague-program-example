/////no char in given string
#include<stdio.h>
#include<string.h>
main()
{
	char s[100],c,*p;
	int k=0;
	printf("enter the string... ");
	scanf("%[^\n]",s);
	printf("enter the character..");
	scanf(" %c",&c);
	printf("string...%s\n",s);
	printf("character...%c\n",c);
	p=s;
	while(p=strchr(p,c))
	{
		k++;
		p=p+1;
	}
	printf("in string %dtimes character..\n",k);
}
