////rteurn address of last chra in string
#include<stdio.h>
char * count(char *p,char q)
{
	int i;
	char *q1=0;
	for(i=0;p[i];i++)
		if(p[i]==q)
			q1=p+i;
	return q1;
}
main()
{
	char s[100],s1,*i;
	printf("enter the first string...");
	scanf("%[^\n]",s);
	printf("enter the character...");
	scanf(" %c",&s1);
	i=count(s,s1);
	if(i==0)
		printf("not present....\n");
	else
		printf(" present at %u %c %s \n ",i,*i,i);
}
