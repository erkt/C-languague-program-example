#include<stdio.h>
main()
{
int i;
FILE *f;
f=fopen("data","r");
fread(&i,sizeof(int),1,f);
printf("i=%d\n",i);
}



