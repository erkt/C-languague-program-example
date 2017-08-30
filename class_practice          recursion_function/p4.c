/////length of string
#include<stdio.h>
int leng(char *p)
{
	if(*p)
		return(1+leng(p+1));
	else
		return 0;
}
main()
{
	char s[100];
	int l;
	printf("string::");
	scanf("%[^\n]",s);
	l=leng(s);
	printf("string::%s\tlength::%d\n",s,l);
}
