/*
1
2*2
3*3*3
4*4*4*4
5*5*5*5*5
4*4*4*4
3*3*3
2*2
1
*/

#include<stdio.h>
main()
{
	int i,j,k,l,m;
	printf("NUMBER::");
	scanf("%d",&m);
	for (i=1;i<=m;i++)
	{

		for(j=1;j<=i*2-1;j++)
		{
			if(j%2)
				printf("%d",i);
			else
				printf("*");
		}
		printf("\n"); 
	}

	for (i=m-1;i>=1;i--)
	{
		for(j=1;j<=i*2-1;j++)
		{
			if(j%2)
				printf("%d",i);
			else
				printf("*");
		}
		printf("\n");
	}
}
