// no equal or not using bitwise
#include<stdio.h>
main()
{
int a,b;
printf("enter value ....");
scanf("%d%d",&a,&b);
printf("A=%d   B=%d\n",a,b);
(a^b)?printf("%d=A and %d=B is not equal...\n",a,b):printf("%d=A and %d=B is  equal..\n",a,b);
}
