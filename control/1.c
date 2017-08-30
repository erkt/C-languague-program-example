///factorial number

#include<stdio.h>
main()
{

int  a,b,c=1;
printf("enter the number.....");
scanf("%d",&a);
for (b=a;b;b--)
c=c*b;
/*c=a;
b=a-1;
x:if ( b>=1)
{
a=a*b;
b--;
goto x;
}*/
printf("%d is factorial of %d number\n",a,c);

}
