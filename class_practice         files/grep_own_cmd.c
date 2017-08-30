////own grep cmd
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
main(int a,char **v)
{
char *p;
FILE *sf;
int c;
	if(a==3)
	{
		sf=fopen(v[2],"r");
		if(sf!=0)
		{
			for(c=0;fgetc(sf)!=-1;c++);
			p=malloc(c+1);
			
			rewind(sf);
				
			while(fgets(p,c,sf))
				if(strstr(p,v[1]))
					printf("%s",p);
		}
i		else
		{
			printf("%s is not present..",v[2]);
			return;
		}
	}
	else
	{
		printf("Usage:: ./a.out substring  main_file..\n");
		return;
	}
}			
