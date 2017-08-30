/////// binary to given number (+ve or -ve)
#include<stdio.h>
main()
{
int k,i,h;
printf("enter the number for checking positive or negative.... ");
scanf("%d",&k);
(k>>31)&1?printf("\nnumber is negative...%d...and its binary is..",k):printf("\nnumber is positive..%d...and its binary is..",k);
for (i=31;i>=0;i--)
{
if((i+1)%8==0)
printf(" ");
h=(k>>i)&1;
printf("%d",h);
}
printf("\n");


}
