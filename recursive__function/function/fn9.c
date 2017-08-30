#include<stdio.h>
int cmp(char *p,char *q)
{
	int i;
	for(i=0;p[i];i++)
		if(p[i]==q[i])
			return 0;
		else if(p[i]>q[i]) 
			return 1;
		else 
			return -1;
}
main()
{
	int i;
	char s[100],s1[100];
	printf("enter the first string...");
	scanf("%[^\n]",s);
	printf("enter the second string....");
	scanf(" %[^\n]",s1);
	i=cmp(s,s1);
	if(i==0)
		printf("\n%s and %s is Equal..",s,s1);
	else if(i==1)
		printf("\n%s is greter than  %s ",s,s1);
	else
		printf("\n%s is less than  %s\n ",s,s1);
}
