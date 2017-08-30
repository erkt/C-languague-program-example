//11) Write a Program to implement grep command. ( Check the command:  grep  searching_word  filename.c )
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
char * my_strstr(char *, char*);
main(int a,char **v)
{
	char *p,*temp;
	FILE *sf;
	int c;
	if(a!=3)
	{
		printf("Usage:: ./a.out Searching_word  main_file..\n");
		return;
	}
	sf=fopen(v[2],"r");
	if(sf==0)
	{
		printf("%s is not present..",v[2]);
		return;
	}

	for(c=0;fgetc(sf)!=-1;c++);
	p=malloc(c+1);

	rewind(sf);

	while(fgets(p,c,sf)!=NULL)
	{
		temp=my_strstr(p,v[1]);
		if(temp!=0)
			{
				printf("%s",temp);
			}
	}
}			
char * my_strstr(char * s , char * d)
{
int i,j;
for(i=0;s[i];i++)
{
	if(s[i]==d[0])
	{
		for(j=0;d[j];j++)
		{
			if(s[i+j]!=d[j])
				break;
		}
	if(d[j]=='\0')
	return s;
	else
	return 0;
	}
}
}
