#include<stdio.h>
main()
{
int a[][3]={{10,20,30},{40,50,60}};
int (*p)[3]=a;

printf("p=%u\n",p);
printf("p+1=%u\n",p+1);
printf("*p=%u\n",*p);
printf("*p+1=%u\n",*p+1);
printf("**p=%u\n",**p);
printf("**p+1=%u\n",**p+1);}
