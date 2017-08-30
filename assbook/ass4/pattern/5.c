/*	5 5 5 5 5
	4 4 4 4
	3 3 3 
	2 2
	1
*/

#include<stdio.h>
main()
{
int i,j,k,l;
printf("enter the number.....");
scanf("%d",&l);
for(i=l;i>0;i--)
{
for(j=0;j<i;j++)
printf("%d ",i);

printf("\n");
}
}
