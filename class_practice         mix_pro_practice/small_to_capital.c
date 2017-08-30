#include<stdio.h>
main()
{

char c,d,e;
printf("enter the latter in between a to z......");
scanf("%c",&c);
printf("\n%c char and ascii is %d",c,c);
d=c&~(1<<5);
printf("\nafter converting small to capital....%c.....\n",d);
e=c^1<<5;
printf("\nafter converting small to capital..and capital to small..%c.....\n",e);

}
