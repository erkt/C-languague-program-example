#include<stdio.h>
void binary(int );
void re(int *);
main()
{
	int n;
	printf("enter the number.........");
	scanf("%d",&n);
	binary(n);
	printf("before\n");
	re(&n);
	binary(n);
	printf("after\n");
}
void binary(int num)
{
	int i;
	for (i=31;i>=0;i--)
	{
		printf("%d",num>>i&1);
		if(i%8==0)
			printf(" ");
	}
}
void re(int *p)
{
	int i,j,m,n;
	for(i=0,j=31;i<j;i++,j--)
	{
		m=*p>>i&1;
		n=*p>>j&1;
		if(m!=n)
		{
			*p=*p^1<<i;
			*p=*p^1<<j;
		}
	}
}

