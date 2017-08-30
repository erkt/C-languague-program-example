/////replce char with  charcter
#include<stdio.h>
main(int a,char **v)
{
	char c;
	FILE *f;
	if(a!=4)
	{
		printf("Usage::./a.out fname char char\n");
		return;
	}
	f=fopen(v[1],"r+");
	if(f==0)
	{
		printf("%s is not present file..\n",v[1]);
		return;
	}
	while((c=fgetc(f))!=-1)
	{
		if(c==v[2][0])
		{
			fseek(f,-1,SEEK_CUR);
			fputc(v[3][0],f);
		}
	}
}


