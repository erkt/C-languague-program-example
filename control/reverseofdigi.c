/////sum of digit reverse
#include<stdio.h>
main()
{
int a,b,n,x;
printf("enter the value...");
scanf("%d",&a);
for(x=a,n=0;x;n=n*10+x%10,x=x/10);
printf("%d number reverse of digit is %d\n",a,n);
}
