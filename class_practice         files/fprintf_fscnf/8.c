#include<stdio.h>
struct d
{
	int a;
	char c;
	float f;
}a;
main()
{
	FILE *f;
	f=fopen("data","r");
	fscanf(f,"%d %c %f\n",&a.a,&a.c,&a.f);
	printf(":::::::%d %c %f\n",a.a,a.c,a.f);
	
}

