/*
	* * * * *
	 * * * *
	  * * *
	   * *
	    *
	   * * 
	  * * *
         * * * *
	* * * * *
 pattern*/
#include<stdio.h>
main()
{
	int i,j,k,l,m,n;
	printf("enter the number...");
	scanf("%d",&n);
	n=n/2;
	for (i=-n;i<=n;i++)
	{
		k=i;
		if (k<0)
			k=-k;
		for(j=n;j>=0;j--)
		{
			if(k<j)
				printf(" ");
			else
				printf("* ");
		}

		printf("\n");
	}
/*	for (i=n;i>0;i--)
	{
		for(j=n;j>i;j--)
			printf(" ");
		for(k=0;k<i;k++)
			printf("* ");
		printf("\n");
	}
	for (i=0;i<n-1;i++)
	{
		for(j=i;j<n-2;j++)
			printf(" ");
		for(k=0;k<=i+1;k++)
			printf("* ");
		printf("\n");
	} 
*/
}
