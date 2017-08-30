#include<stdio.h>
int sum(int,int);
int sub(int,int);
int mul(int,int);
int div(int,int);
main()
{
	int n,n1,r,i;
	int (*p[4])(int,int);
	scanf("%d %d",&n,&n1);
	p[0]=sum;	
	p[1]=sub;
	p[2]=mul;
	p[3]=div;
	for(i=0;i<4;i++)
	{
		r=(*p[i])(n,n1);
		printf("%d\n",r);
	}	

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

