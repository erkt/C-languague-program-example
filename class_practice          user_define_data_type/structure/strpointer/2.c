#include<stdio.h>
typedef struct st
{
	int r;
	float m;
}ST;

main()
{
	ST *p;
	p=malloc(sizeof(ST));
	scanf("%d  %f",&p->r,&p->m);
	printf("%d  %f\n",p->r,p->m );
}
