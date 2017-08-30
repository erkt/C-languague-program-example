#include<stdio.h>
struct bit
{
int i:4;
int j:5;
}a={9,9};
main()
{
printf("%d    %d\n",a.i,a.j);
printf("%d    %d\n",(unsigned int)a.i,(unsigned int)a.j);
}
