#include<stdio.h>
typedef struct st
{
int r;
float m;
}ST;

main()
{
ST s={10,3.02},*p;
p=&s;
printf("%d  %f\n",p->r,p->m );
}
