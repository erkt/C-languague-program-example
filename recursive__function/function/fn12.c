//reversersing the  string
#include<stdio.h>
char * count(char *p)
{
	int i,j;
	char q;
	for(i=0;p[i];i++);
	for(i=i-1,j=0;i>j;i--,j++)
	{
	q=p[i];p[i]=p[j];p[j]=q;
	}
}
main()
{
	char s[100];
	printf("enter the first string...");
	scanf("%[^\n]",s);
	printf("before...  %s \n ",s);
	count(s);
	printf("after....  %s \n ",s);
}
