///printning the string using recursive function
#include<stdio.h>
void print(char *p)
{
	if(*p)
	{
		printf("%c",*p);
		print(p+1);
	}
}
main()
{
	char s[100];
	printf("string::");
	scanf("%[^\n]",s);
	printf("just printing::");
	print(s);
	printf("\n");
}
