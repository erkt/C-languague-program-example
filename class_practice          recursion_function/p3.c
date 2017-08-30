///reverse printing the string using recursive function
#include<stdio.h>
void print(char *p)
{
	if(*p)
	{
		print(p+1);
		printf("%c",*p);
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
