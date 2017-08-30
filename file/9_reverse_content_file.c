//9) Write a Program to reverse the Contents of a given file.
#include<stdio.h>
#include<stdlib.h>
main(int argc,char**argv)
{
	if(argc!=2)
	{
		printf("Usage:: ./a.out F_name..\n");
		return;
	}

	char *p,ch;
	int c,i=0;
	FILE *fp;
	fp=fopen(argv[1],"r");
	if(fp==0)
	{
		printf("%s is not present..\n",argv[1]);
		return;
	}
	fseek(fp,-2,SEEK_END);
	c=ftell(fp);
	p=malloc(c+1);
	rewind(fp);
	while((ch=fgetc(fp))!=EOF)
	{
		p[i++]=ch;
	}
	fclose(fp);
	fp=fopen(argv[1],"w");
	i=c;
	while(i>=0)
		fputc(p[i--],fp);

}

