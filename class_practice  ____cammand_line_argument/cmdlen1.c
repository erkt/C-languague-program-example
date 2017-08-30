#include<stdio.h>
main(int a,char **v)
{
	int i,j;
	if(a<2)
	{
		printf("Usage::string.........\n");
		return ;
	}
	for(j=0;j<a;j++)
	{
		for(i=0;v[j][i];i++);
		printf("the length of %s is %d.\n",v[j],i);
	}
}

