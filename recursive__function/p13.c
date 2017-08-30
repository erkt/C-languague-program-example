// 13) Write a recursive function to revese the string. (Note : not just reverse printing charecter by charecter)
#include<stdio.h>
void revstring(char *p,int j,int i)
{
	char c;
	if(i<j)
	{
		c=p[i];
		p[i]=p[j];
		p[j]=c;
		revstring(p,j-1,i+1);
	}
	else
		return;
}
main()
{
	int i;
	char s[1000];
	printf("STRING::");
	scanf("%[^\n]",s);
	for(i=0;s[i];i++);
	revstring(s,i-1,0);
	printf("%s\n",s);
}
