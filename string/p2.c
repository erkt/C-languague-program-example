/*2)one line code to copy the string into another buffer.*/

#include<stdio.h>
main()
{
char c[100],*p,*q;
int i;
printf("enter the string...");
scanf("%[^\n]",c);
printf("before....%s\n",c);
for(p=c,q=c;*q;*p=*q,p++,q++);
p=c;
printf("after...%s\n",p);
}

