/*	*
       * *
      * * *
     * * * *
    * * * * * 
   * * * * * * 
    * * * * *
     * * * * 
      * * *
       * * 
        *
 pattern*/
#include<stdio.h>
main()
{
	int i,j,k,l,m,n;
printf("enter the number...");
scanf("%d",&n);	
for (i=0;i<n;i++)
	{
		for(j=i;j<n;j++)
			printf(" ");
		for(k=0;k<i;k++)
			printf("* ");
		printf("\n");
	}

	for (i=n;i>0;i--)
	{
		for(j=i;j<n;j++)
			printf(" ");
		for(k=0;k<i;k++)
			printf("* ");
		printf("\n");
	} 
}
