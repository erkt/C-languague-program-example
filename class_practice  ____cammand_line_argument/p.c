#include<stdio.h>
main(int a,char **v)
{
int i;
printf("arg::%d\n",a);
for(i=0;i<a;i++)
printf("a[%d]::%s\n",i,v[i]);
}
