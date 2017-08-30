/*1 1 1 
   2 2
    3
   2 2 
  1 1 1
*/
#include<stdio.h>
main()
{
	int i,j,k,l,n;
	scanf("%d",&n);


	for (i=1;i<=n;i++)
	{
		for(k=0;k<i;k++)
			printf(" ");
		for (j=i;j<=n;j++)
		{
			printf("%d ",i);
		}

		printf("\n");
	}
	for (i=n-1;i>0;i--)
	{
		for(k=i;k>0;k++)
			printf(" ");
		for (j=i;j>=n;j++)
		{
			printf("%d ",i);
		}

		printf("\n");
	}
}
