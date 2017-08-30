#include<stdio.h>
main()
{
short int n,j;
scanf("%hd",&n);
for(j=sizeof(n)*8-1;j>=0;printf("%hd",((n>>j)&1)),j--);
printf("\n");
}
