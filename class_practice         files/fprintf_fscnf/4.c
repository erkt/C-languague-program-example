#include<stdio.h>
main()
{
	int i[5],a;
	FILE *f;
	f=fopen("data","r");
	for(a=0;a<5;a++)
	fscanf(f,"%d",&i[a]);
	for(a=0;a<5;a++)
		printf("i=%d\n",i[a]);
}
