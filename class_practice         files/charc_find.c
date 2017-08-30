////given char of file .....
#include<stdio.h>
main(int a,char **v)
{
	FILE *sp;
	static char count;
	char ch;
	if(a!=3)
		printf("Usage::. ./a.out  source filename chracter\n");
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
			{	
				if(ch==v[2][0])
				count++;
			}
			printf("%s is char %c of file is %d\n",v[1],v[2][0],count);
		}
	}
}
