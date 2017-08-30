#include<stdio.h>
int sum(int,int);
int sub(int,int);
int mul(int,int);
int div(int,int);
main()
{
	int n,n1,r,i,op;
	int (*p[4])(int,int);
	scanf("%d %d",&n,&n1);
	p[0]=sum;	
	p[1]=sub;
	p[2]=mul;
	p[3]=div;
	printf("enter the option::\n1)sum\n2)sub\n3)mul\n4)div\n");
	scanf("%d",&op);
	if(op>=1&&op<=4)
	printf("ANSWER::%d\n",(*p[op-1])(n,n1));
	else
	printf("unknown option..\n");
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

