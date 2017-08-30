//character replace by other character...
#include<stdio.h>
#include<stdlib.h>
main(int a,char **v)
{
int count,i;
char c,*p;
FILE *sf;


	if (a==4)
	{
		sf=fopen(v[1],"r+");
		if(sf!=0)
		{
			for(count=0;(fgetc(sf)!=-1);count++);
			p=malloc(count+1);
			rewind(sf);
			for(i=0;((c=fgetc(sf))!=-1);p[i++]=c);
			p[i]='\0';
			
			for(i=0;p[i];i++)
				if(p[i]==v[2][0])
					p[i]=v[3][0];
			
			rewind(sf);
			fputs(p,sf);//////////whole string putting into other file
//			for(i=0;p[i];fputc(p[i++],sf));	//char by char putting into other file....	


	/*
			while((c=fgetc(sf))!=-1)
			{
				if(c==v[2][0])
//					fputc(v[3][0],sf);/////////////////file pointer can't ++ or -- by manual;;;this not give correct output..
			}*/
		}	
		else
		{
			printf("%s is not present..\n",v[1]);
			return;
		}
	}
	else
	{
		printf("Usage:: ./a.out  file_name  search_charcter  replce_char\n");
	}
}	
