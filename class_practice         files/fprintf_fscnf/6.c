#include<stdio.h>
main()
{
	char s[20];
	FILE *f;
	f=fopen("data","r");
	fscanf(f,"%s",s);
	printf("sss=%s\n",s);
}
