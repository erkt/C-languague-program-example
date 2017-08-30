#include<stdio.h>
main()
{
int i[]={1,1,1,1,1},a;
FILE *f;
f=fopen("data","w");
fwrite(i,sizeof(int),5,f);
for(a=0;a<5;printf("i=%d\n",i[a++]));
}



