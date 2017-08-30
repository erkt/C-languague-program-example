/////replace with string to other string....
#include<stdio.h>
#include<string.h>
main(int a,char**v)
{
	int i,l,j;
	char c[1000],c1[1000];
		FILE *p;
	if(a!=3)
	{
		printf("Usage::./a.out fname string\n");
		return;
	}
	p=fopen(v[1],"r+");
	if(p==0)
	{
		printf("%s is not present.....\n",v[1]);
		return;
	}
	l=strlen(v[2]);
	for(i=0,j=l-1;j>=0;c[i++]=v[2][j--]);
	printf("data::%s\n",c);
	while(fscanf(p,"%s",c1)!=EOF)
	{
		if(strcmp(c1,v[2])==0)
		{
			fseek(p,-l,SEEK_CUR);
			fprintf(p,"%s",c);
		}
	}
}



