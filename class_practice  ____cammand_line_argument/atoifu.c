#include<stdio.h>
int astoi(char *c)
{
	int i,s;
	for(i=0,s=0;c[i];i++)
	{
		if(c[i]>='0'&&c[i]<='9')
			s=s*10+c[i]-48;
		else
			break;
	}
	return s;
}
main()
{
	int i;
	char c[1000];
	printf("string as digit...");
	scanf("%s",c);
	i=astoi(c);
	printf("i::%d   string::%s\n\n",i,c);
}


