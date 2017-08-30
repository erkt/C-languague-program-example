#include<stdio.h>
main()
{
	char s[20];
	FILE *f;
	printf("Enter string::");
	scanf("%s",s);
	f=fopen("data","w");
	fprintf(f,"%s",s);
	printf("sss=%s\n",s);
}
