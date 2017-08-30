/*1
  1 0
  1 0 1
  1 0 1 0
*/
#include<stdio.h>
main()
{
int i,j,k,l,n;
printf("row::");
scanf("%d",&n);
for(i=0;i<n;i++)
{
	for(j=0;j<=i;j++)
	{
		if(j%2)
		{
			printf("0 ");
		}
		else
			printf("1 ");
	}
	printf("\n");
}
}
