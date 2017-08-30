/////string printing
#include<stdio.h>
void ar(char *);
main()
{
	char a[10];
	printf("enter the string.....\n");
	scanf("%s",a);
ar(a);
	printf("\n");
}
void ar(char *p)
{
	int i;
	for(i=0;p[i];i++)
		printf("%c   ",p[i]);
}
