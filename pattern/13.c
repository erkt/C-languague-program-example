/* 
	1                 1
	1 2             2 1
	1 2 3         3 2 1 
	1 2 3 4     4 3 2 1 
	1 2 3 4 5 5 4 3 2 1
*/
#include<stdio.h>
main()
{
	int i,j,k,l,n,m;
	printf("enter the num...");
	scanf("%d",&m);

	for(i=m,l=0;i>=0;i--)
	{
		for(j=-m;j<=m;j++)
		{
			k=j;
			if(k<0)
			k=-k;
			if(k<i)
			printf("  ");
			else
			printf("%d ",k);
		}
		printf("\n");
	}

}
