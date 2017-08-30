#include<stdio.h>
main()
{
	int i[5]={10,20,30,40,50},a;
	FILE *f;
	f=fopen("data","w");
	for(a=0;a<5;a++)
	fprintf(f,"%d ",i[a]);
	for(a=0;a<5;a++)
		printf("i=%d\n",i[a]);
}
