#include<stdio.h>
int prime(int);
main()
{
int n,r;
printf("enter the number...........");
scanf("%d",&n);
r=prime(n);
if(r)
printf("no %d is prime",n);
else
printf("no %d is not prime",n);

printf("\n");
}
int prime(int n)
{
int i;
for (i=2;i<n;i++)
if(n%i==0)
return 0;

if(n==i)
return 1;
}

