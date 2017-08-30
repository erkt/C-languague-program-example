#include<stdio.h>
#include<stdlib.h>
typedef struct st
{
	int r;
	float m;
}ST;

main()
{
	int n,i;
	ST **p;
	printf("enter the no of student::");	
	scanf("%d",&n);
	printf("%u\n",sizeof(ST*));
	p=malloc(sizeof(ST*)*n);
	for(i=0;i<n;i++)
	{
		p[i]=malloc(sizeof(ST));
	}
	for(i=0;i<n;i++)
	{
		scanf("%d",&p[i]->r);
		scanf("%f",&p[i]->m);
	}
	for(i=0;i<n;i++)
		printf("%d  %f\n",p[i]->r,p[i]->m );
}
