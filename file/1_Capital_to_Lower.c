//1) Write a Program to Convert Lower to Upper and Upper to Lower Cases of a given file.
#include<stdio.h>
#include<stdlib.h>
main(int a,char **v)
{
	FILE *sf;
	char *p,ch;
	int c,i;
	if(a==2)
	{
		sf=fopen(v[1],"r+");
		if(sf!=0)
		{
			for(c=0;fgetc(sf)!=-1;c++);
			p=malloc(c+1);
			
			rewind(sf);
			for(i=0;(ch=fgetc(sf))!=-1;p[i++]=ch);
			rewind(sf);
			
			for(i=0;p[i];i++)
				if(p[i]>='a'&&p[i]<='z'||p[i]>='A'&&p[i]<='Z')
					p[i]=p[i]^1<<5;
			fputs(p,sf);
		}
		else
		{
			printf("%s file  is not present..\n",v[1]);
			return;
		}
	}
	else
	{
		printf("Usage:: ./a.out flename..\n");
		return;
	}
}						
