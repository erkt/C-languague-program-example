/*  1 2 3 
     2 3 
      3
     2 3 
    1 2 3
*/
#include<stdio.h>
main()
{
	int n,i,j,k,l,temp;
	printf("enter the number::");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(k=0;k<i;k++)
			printf(" ");
		for(j=i+1;j<=n;j++)
			printf("%d ",j);
		printf("\n");}

	for(i=0;i<(n-1);i++)
	{
		l=n-(i+1);
		for(k=n;k>0;k--)
			if(k>i+2)
				printf(" ");
			else
			{
				printf("%d ",l++);}
		printf("\n");
	}
}
