#include<stdio.h>
int fact(int);
main()
{
int n,f;
printf("enter the number:::");
scanf("%d",&n);
f=fact(n);
printf("num:::%d\t fact:::%d\n",n,f);
}
int fact(int n)
{
if(n>1)
return(n*fact(n-1));
else
return 1;
}

