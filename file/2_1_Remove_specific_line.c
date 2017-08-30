//2) Write a Program to remove a Specific line from the given text file.
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
main(int a1,char **v)
{
	int i,c=0,l=1,c1=0,b,j,n;
	char ch,**p,a[100];
	FILE *f;
	n=atoi(v[2]);
	if(a1!=3)
	{
		printf("Usage:: ./a.out F_name select_line\n");
		return;
	}
	if((f=fopen(v[1],"r"))==NULL)
	{
		printf("%s is not present.\n",v[1]);
		return;
	}
	while((ch=fgetc(f))!=EOF)
	{
		c++;c1++;
		if(ch=='\n')
		{
			l++;
			if(b<c1)b=c1;
			c1=0;
		}
	}
	printf("CHAR::%d   LINE::%d   MAX_CHAR::%d\n",c,l,b);
	p=malloc(sizeof(int *) * l);
	for(i=0;i<l;i++)
		p[i]=malloc(b+1);
	rewind(f);
	i=0;
	while((fgets(a,100,f))!=NULL)
	{
		if(i!=n-1)
			strcpy(p[i++],a);
		else	
			i++;
	}
	fclose(f);
	f=fopen(v[1],"w");
	for(i=0;i<l-1;fputs(p[i++],f));			
}
