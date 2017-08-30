#include<stdio.h>
main()
{
char c;
FILE *fp=fopen("1.c","r");
printf("%d-%p\n",fp,fp);
fp++;
printf("%d  %p--\n",fp,fp);
fp++;
printf("%d  %p--\n",fp,fp);
fp--;
printf("%d  %p--\n",fp,fp);
}
