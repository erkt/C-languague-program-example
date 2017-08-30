////copy file source to destination....
#include<stdio.h>
main(int a,char **v)
{
	FILE *sp,*dp;
	char ch;
	if(a!=3)
		printf("Usage::. ./a.out  source filename  destination filename....\n");
	else
	{
		sp=fopen(v[1],"r");
		if(sp==0)
		{
			printf("File is not present..\n");
			return;
		}
		else
		{
			dp=fopen(v[2],"w");
			while((ch=fgetc(sp))!=-1)
				fputc(ch,dp);
			printf("%s is copy done\n",v[1]);
		}
	}
}
