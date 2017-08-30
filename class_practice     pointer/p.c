#include<stdio.h>
main()
{
/*
int i=10,j=20,*p;
p=&i;
printf("%d\n",*p);
printf("%d\n",p);
p=0;
printf("%d\n",p);

int i=258,*ip;
char *cp;
ip=&i;
cp=(char *)&i;
printf("%d %d \n",*ip,*cp);
*/
int *ip,i;
float f=3.5,*fp;
ip=&f; fp=&f;
printf("%d %d ",*ip,*fp);
for (i=31;i>=0;i--)
printf("%d",*ip>>i&1);
/*
int i=258,*ip;
char *cp;
ip=&i;
cp=(char *)&i;
printf("%p %p \n",ip,ip+1);
printf("%p %p \n",cp,cp+1);
*/}
