#include<stdio.h>
main()
{
	int i=100;
	FILE *f;
	f=fopen("data","w");
	fprintf(f,"%d",i);
}
