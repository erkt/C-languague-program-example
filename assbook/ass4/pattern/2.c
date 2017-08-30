/*       *
        * * 
       * * * 
      * * * *
*/


#include<stdio.h>
main()
{
int i ,j,k;
for(i=0;i<8;i++)
{
for(j=0;j<i;j++)
printf(" ");
for(k=i;k<8;k++)
printf("* ");
printf("\n");
}
}
