#include<stdio.h>
//typedef int (*ptr)(int,int);
//ptr call(void);

int(*call(void))(int,int);
int sum(int ,int);
main()
{
	int (*p)(int ,int);
	int n=10,n1=20;
	p=call();
	printf("%d\n ",(*p)(n,n1));
}
int(*call(void))(int,int)
{
	return sum;
}
int sum(int i,int j)
{
	return i+j;
}
