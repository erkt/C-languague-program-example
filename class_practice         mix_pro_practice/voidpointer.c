#include<stdio.h>
main()
{
int i=10;
float f=23.5;
char c='a';
void *p;
p=&i;
printf("%d\n",*(int *)p);
p=&f;
printf("%f\n",*(float *)p);
p=&c;
printf("%c\n",*(char *)p);
}
