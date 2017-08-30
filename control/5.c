//////multiplication table
#include<stdio.h>
main()
{

	int n,n1,m,v,i;
	printf("enter number for multiplication....");
	scanf("%d",&n);
	printf("enter number between multiplication....");
	scanf("%d",&n1);
	printf("enter you want upto multiplication.....");
	scanf("%d",&m);
	for (n;n<=n1;n++)
	{
		printf("....multiplication table for n=%d\n",n);
		for (i=1;i<=m;i++)
		{
			v=n*i;
			printf("%d * %d = %d\n",n,i,v);
		}
	}
	printf(".....THANK YOU....\n");
}
