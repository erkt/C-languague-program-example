#include<stdio.h>
typedef struct one
{
	int i;
	char c;
	float f;
}zz;
struct o
{
	int i;
	char c;
	float f;
}z={1,'a',9.999999999};
main()
{
	struct one a;
	struct one a1={99999,'i',99.25};
	zz a2={21245,'l',63.05214};
	scanf("%d",&a.i);
	scanf(" %c",&a.c);
	scanf("%f",&a.f);

//	printf("%d   %c   %f\n",a);

	printf("%d   %c   %f\n",a.i,a.c,a.f);
	printf("%d   %c   %f\n",a1.i,a1.c,a1.f);
	printf("%d   %c   %f\n",a2.i,a2.c,a2.f);
	printf("%d   %c   %f\n",z.i,z.c,z.f);
}
