/////power of 2

#include<stdio.h>
main()
{

int n;
printf("enter the number .....");
scanf("%d",&n);
if (n&(n-1))
{
printf("Number..%d is not power of 2.....",n);
}
else
{
printf("Number..%d is power of 2.....",n);
}
}
