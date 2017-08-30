#include<stdio.h>
main()
{
int i=100;
FILE *f;
f=fopen("data","w");
fwrite(&i,sizeof(int),1,f);
}


