#include<stdio.h>
struct o
{
	int i;
	float f;
	char c1,c2,c3;
}k;
main()
{
	printf("%d---",sizeof(k));
	printf("%u---%u---%u---%u---%u\n",&k.i,&k.f,&k.c1,&k.c2,&k.c3);
}
