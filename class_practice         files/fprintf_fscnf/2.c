#include<stdio.h>
main()
{
	int i;
	FILE *f;
	f=fopen("data","r");
	fscanf(f,"%d",&i);
		printf("i=%d\n",i);
}
