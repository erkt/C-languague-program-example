////size of file .....
#include<stdio.h>
main(int a,char **v)
{
	FILE *sp;
	char ch;
	int count=0;
	if(a!=2)
		printf("Usage::. ./a.out  source filename.\n");
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
			while((ch=fgetc(sp))!=-1)
				count++;
			printf("%s is size of file is %d\n",v[1],count);
		}
	}
}
