//3) Write a Program to replace a Specified line in a given file.
//./a.out f_name linenumber "string line"  string_replce
#include<string.h>
#include<stdio.h>
#include<stdlib.h>
main(int argc,char **argv)
{
	FILE *fp;
	char **p,ch,a[100];
	int line=0,c=0,c1=0,i,max,n;
	n=atoi(argv[2]);
	if(argc!=4)
	{
		printf("Usage:: ./a.out F_nama Line_number  ''string line'' ...\n");
		return;
	}
	if((fp=fopen(argv[1],"r"))==NULL)
	{
		printf("%s file is not present..\n",argv[1]);
		return;
	}
	while((ch=fgetc(fp))!=EOF)
	{
		c++;
		c1++;
		if(ch=='\n')
		{
			line++;
			if(max<c1)
				max=c1;
			c1=0;
		}
	}
	printf("'%s' ,  %dline ,  %dchar , %dmax char per line\n",argv[1],line,c,max);
	p=malloc(sizeof(char *) * line);
	for(i=0;i<line;i++)
		p[i]=malloc(sizeof(char)*(max+1));
	rewind(fp);
	i=0;
	strcat(argv[3],"\n");	
	while((fgets(p[i++],max+1,fp))!=NULL);
	fclose(fp);
	fp=fopen(argv[1],"w");
	for(i=0;i<line;i++)
		if(i!=n-1)
			fputs(p[i],fp);
		else
			fputs(argv[3],fp);
}
/*	while((fgets(a,100,fp))!=NULL)
	{
		
		if(i!=n-1)
			strcpy(p[i],a);
		else
			strcpy(p[i],argv[3]);
		printf("%s",p[i]);
		i++;
	}
	fclose(fp);
	fp=fopen(argv[1],"w");
	for(i=0;i<line;i++)
		fputs(p[i],fp);
*/

