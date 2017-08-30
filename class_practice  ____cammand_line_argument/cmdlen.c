#include<stdio.h>
main(int a,char **v)
{
int i;
if(a!=2)
{
printf("Usage::string..\n");
return ;
}
for(i=0;v[1][i];i++);
printf("the length of %s is %d.\n",v[1],i);
}


