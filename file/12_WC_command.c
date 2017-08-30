//12) Write a Program to implement wc command. (Check the command: wc filename.c)
#include<stdio.h>
main(int argc,char**argv)
{



	if(argc!=2)
	{
		printf("Usage:: ./a.out F_name.\n");
		return;
	}
	FILE *fp;
	char ch,c[100];
	int CHAR=0,LINE=0,WORD=0,l=0;
	fp=fopen(argv[1],"r");
	if(fp==0)
	{
		printf("%s File Is Not Present..\n",argv[1]);
		return;
	}
	while((fscanf(fp,"%s",c))!=EOF)
		WORD++;
	rewind(fp);
	while((ch=fgetc(fp))!=EOF)
	{
		CHAR++;
		if(ch=='\n')
			LINE++;
	}
	printf("LINE::%d\tWORD::%d\tCHAR::%d\n",LINE,WORD,CHAR);
}
