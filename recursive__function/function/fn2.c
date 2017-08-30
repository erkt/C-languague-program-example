#include<stdio.h>
int fc(int);

main()
{
	int n,f;
	printf("enter the number.......");
	scanf("%d",&n);
	f=fc(n);////////////function call
	printf("\t%d\n",f);
}
int fc(int n)
{
	int i,f;
	for(i=f=1;i<=n;i++)
		f=f*i;

	return f;
}
