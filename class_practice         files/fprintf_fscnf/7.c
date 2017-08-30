#include<stdio.h>
struct d
{
int a;
char c;
float f;
}a={10,'a',22.02};
main()
{
FILE *f;
f=fopen("data","w");
fprintf(f,"%d %c %f\n",a.a,a.c,a.f);

}

