#include<stdio.h>
main()
{
int i[5],a;
FILE *f;
f=fopen("data","r");
fread(i,sizeof(int),5,f);
for(a=0;a<5;printf("i=%d\n",i[a++]));
}



