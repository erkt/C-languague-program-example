#include<stdio.h>
main()
{
union a{
int i;
char ch[4];
};
union a u;
u.ch[0]=0;
u.ch[1]=0;
u.ch[2]=0;
u.ch[3]=128;
printf("%d\n",u.ch[0]);
printf("%d\n",u.ch[1]);
printf("%d\n",u.i);
}
