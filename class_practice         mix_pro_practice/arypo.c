#include<stdio.h>
main()
{
int a[]={10,20,30,40,50},*p[]={a,a+1,a+2,a+3,a+4 };
printf("a=%u\n",a);
printf("p=%u\n",p);
printf("a+1=%u\n",a+1);
printf("p+1=%u\n",p+1);
printf("&p=%u\n",&p);
printf("&p+1=%u\n",&p+1);
printf("*p=%u\n",*p);
printf("*p+1=%u\n",*p+1);
printf("**p=%u\n",**p);
printf("**p+1=%u\n",**p+1);

}
