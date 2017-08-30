#include<stdio.h>
int sum(int,int);
int sub(int,int);
int mul(int,int);
int div(int,int);
main()
{
	int n,n1,r,i;
	char o,s[]="+-*/";
	int (*p[4])(int,int);
	scanf("%d %d",&n,&n1);
	p[0]=sum;
	p[1]=sub;
	p[2]=mul;
	p[3]=div;
	scanf(" %c",&o);
	for(i=0;s[i];i++)
	{
		if(s[i]==o)
		{
			printf("res::%d\n",(*p[i])(n,n1));
			break;
		}
	}
	if(s[i]=='\0')
		printf("unknown option...");
}
int sum(int i,int j)
{
	return(i+j);
}
int sub(int i,int j)
{
	return(i-j);
}
int mul(int i,int j)
{
	return(i*j);
}
int div(int i,int j)
{
	return(i/j);
}

