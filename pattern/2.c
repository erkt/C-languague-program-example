/*	

	*
       ***
      *****
     *******
      *****
       ***
	*
	
 pattern*/
#include<stdio.h>
main()
{
	int i,j,k,l,m,n;
	printf("enter the number...");
	scanf("%d",&l);
	n=l/2;
	for(i=-n;i<=n;i++)
	{
		k=i;
		if(k<0)
			k=-k;
		m=l-k;
		printf("m=%d,i=%d\n",m,i);
		for(j=0;j<=m;j++)
		{
			if (k>=j)	
				printf(" ");
			else
				printf("*");
		}
		printf("\n");
	}
	printf("\n");
}
