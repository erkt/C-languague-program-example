/////sum of digit
#include<stdio.h>
main()
{
int a,b,n,x;
printf("enter the value...");
scanf("%d",&a);
for(x=a,n=0;x;n=n+x%10,x=x/10);
/*for(x=a,n=0;x;)
{
b=x%10;
n=n+b;
x=x/10;
}*/

printf("%d number sum of digit is %d\n",a,n);
}
