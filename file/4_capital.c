//4) Write a Program to Capitalize First Letter of every Word in a file.
#include<stdio.h>
#include<string.h>
main(int a,char**v)
{
	int n;
	char ch[1000];
	FILE *f;
	if(a!=2)
	{
		printf("Usage::./a.out F_name.\n");
		return;
	}
	f=fopen(v[1],"r+");
	if(f==0)
	{
		printf("%s is not present.\n",v[1]);
		return;
	}
	while(fscanf(f,"%s",ch)!=EOF)
	{
		n=strlen(ch);
		if(ch[0]>='a'&&ch[0]<='z')
			ch[0]=ch[0]-32;
		fseek(f,-n,SEEK_CUR);
		fprintf(f,"%s",ch);
	}
}		
