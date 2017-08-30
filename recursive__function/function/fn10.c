///return strting address of char
#include<stdio.h>
char * count(char *p,char q)
{
	int i;
	for(i=0;p[i];i++)
		if(p[i]==q)
			return p+i;
	return 0;
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
