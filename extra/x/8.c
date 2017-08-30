#include<stdio.h>
#define sum(a,b,c) a+b+c
#define avg(a,b,c) sum(a,b,c)/3
#define gep(a,b,c) avg(a,b,c)>=60
#define lee(a,b,c) avg(a,b,c)>=60
#define des(a,b,c,d) d==1?gep(a,b,c):lee(a,b,c)
main()
{
int num=70;
char ch=0;
float f=2.0;
if(des(num,ch,f,0))
puts("lee");
else
puts("gep");
}
