/*	
     *******
      *****
       ***
	*
       ***
      *****
     *******	
 pattern*/
#include<stdio.h>
main()
{
	int i,j,k,l,m,n,o;
	printf("enter the number...");
	scanf("%d",&l);
	n=l/2;
	for(i=-n;i<=n;i++)
	{
	k=i;
	if(k<0)
	k=-k;
	m=k*2+1;
	for(o=k;o<n;o++)
	printf(" ");
	for(j=m;j>0;j--)
	printf("*");
	printf("\n");
}
printf("\n");
}
