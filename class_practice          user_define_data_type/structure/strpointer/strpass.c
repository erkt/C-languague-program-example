#include<stdio.h>
struct one
{
	int i;
	float f;
	char c[20];
};
void print(int,float,char*);
void p1(struct one);
void p2(struct one *p);
main()
{
	struct one a={10,22.2222,"kttt"};
	print(a.i,a.f,a.c);
	p1(a);
	p2(&a);
	printf("\n");
}
void print(int i,float f,char *p)
{
	printf("%d    %f   %s\n",i,f,p);
}
void p1(struct one b)
{
	printf("%d    %f    %s\n",b.i,b.f,b.c);
}
void p2(struct one *p)
{
	printf("%d      %f    %s\n",p->i,p->f,p->c);
}
