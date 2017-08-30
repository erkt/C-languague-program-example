//////copy source to destination
#include<stdio.h>
void cp(char *,char* );
main()
{
	char a[100],b[100];
	printf("enter the string...");
	scanf("%s",a);
	printf("before.......\n\t%s",a);
	cp(a,b);
	printf("\nafter......\n\t%s",b);
	printf("\n");
}
void cp(char *c,char *c1)
{
	int i;
	for(i=0;c[i];i++)
		c1[i]=c[i];
	c1[i]=c[i];
}
