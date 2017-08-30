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
	scanf("%d",&n);
	for(i=-n;i<=n;i++)
	{
	k=i;
	if(k<0)
	k=-k;
	for(j=n;j>=0;j--)
	{
	if (k<j)	
	printf(" ");
	else
	printf("* ");
	}
	printf("\n");
}
}
