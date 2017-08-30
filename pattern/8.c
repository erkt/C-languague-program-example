/*	1
	2 6
	3 7 10
	4 8 11 13
	5 9 12 14 15
*/
#include<stdio.h>
main()
{
	int n,i,j,l=0,k;
	printf("ROW::");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		for(j=1,k=i,l=n-1;j<=i;j++)
		{
			if(j==1)
			printf("%d ",i);
			else
			printf("%d ",k=k+l--);
		}
		printf("\n");
	}
}
