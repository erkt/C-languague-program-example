//11) Write a recursive function to reverse the bits of a given number.
#include<stdio.h>
int revbit(int n,int l,int k)
{
	int q,m;
	if(l>k)
	{
		m=n>>l&1;
		q=n>>k&1;
		if(m!=q)
		{
			n=n^1<<l;
			n=n^1<<k;
		}
		revbit(n,l-1,k+1);
	}
	else
		return n;
}
main()
{
	int n,i,l,m;
	printf("NUMBER::");
	scanf("%d",&n);
	l=sizeof(n)*8;
	for(i=l-1;i>=0;i--)
		printf("%d",n>>i&1);
	m=revbit(n,l-1,0);
	printf("\n%d\n",m);
	for(i=l-1;i>=0;i--)
		printf("%d",m>>i&1);
	printf("\n");
}
