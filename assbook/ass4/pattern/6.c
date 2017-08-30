/*	1
       2 2 
      3 3 3 
     4 4 4 4 
*/


#include<stdio.h>
main()
{
int i,j,k,l,m;
printf("enter the number....");
scanf("%d",&m);
for(i=1;i<=m;i++)
{
for (j=i;j<m;j++)
printf(" ");
for(k=0;k<i;k++)
printf("%d ",i);

printf("\n");
}
}









