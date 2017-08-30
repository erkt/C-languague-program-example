/*

	     A
	    A B
	   A B C
	  A B C D
	   B C D
	    C D 
	     D


*/
#include<stdio.h>
main()
{
	int i,j,k,l,n;
	char ch='A';
	printf("enter the raw..");
	scanf("%d",&n);
	for (i=1;i<=n;i++)
	{
		for(k=i;k<n;k++)
			printf(" ");
		for(j=0;j<i;j++)
			printf("%c ",ch+j);
		printf("\n");
	}

	for(i=1;i<=n-1;i++)
	{
		for(k=1;k<=i;k++)
			printf(" ");
		for(j=i;j<=n-1;j++)
			printf("%c ",ch+j);
		printf("\n");
	}
}
