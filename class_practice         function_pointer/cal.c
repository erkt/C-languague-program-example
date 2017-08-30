#include<stdio.h>
int sum(int,int);
int sub(int,int);
int mul(int,int);
int div(int,int);
main()
{
	int n,n1,r;
	int (*p)(int,int);
	p=sum;
	scanf("%d %d",&n,&n1);
	r=(*p)(n,n1);
	printf("%d\n",r);
	r=sum(n,n1);
	printf("%d\n",r);

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

