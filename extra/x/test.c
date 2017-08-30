#include<stdio.h>
main()
{
FILE *fp;
fp=fopen("data","r");
printf("%d\n",fp);

fp++;
//fseek(fp ,+20,SEEK_CUR);
printf("%d\n",fp);
printf("%d\n",ftell(fp));
//printf("%d\n",ftell(fp=fopen("data1","r")));
}


