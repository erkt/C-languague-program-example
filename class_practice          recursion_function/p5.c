/////copy of string
#include<stdio.h>
void cp(char *p,char *q)
{
	if(*p)
	{
	*q=*p;
		cp(p+1,q+1);
}
	else
	*q=*p;
}
main()
{
	char s[100],c[100];
	int l;
	printf("string::");
	scanf("%[^\n]",s);
	cp(s,c);
	printf("source string::%s\tdestination string::%s\n",s,c);
}
