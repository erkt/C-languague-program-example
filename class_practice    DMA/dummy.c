#include<stdio.h>
#include<stdlib.h>
main()
{
	int i,n,m;
	char *p,*q,*w,*x;
	printf("enter the n::");
	scanf("%d",&n);
	p=malloc(sizeof(char*)*n);
		printf("P:::%u           sizeof p::%d\n",p,sizeof(p));
	q=malloc(sizeof(char*)*n);
		printf("Q::::%u           sizeof p::%d\n",q,sizeof(q));
	printf("enter new memory size for p::");
	scanf("%d",&m);
	w=realloc(p,sizeof(char*)*m);
		printf("w::New::%u        p   sizeof w::%d\n",w,sizeof(w));
	w=realloc(q,sizeof(char*)*m);
		printf("w::New,,::%u     q      sizeof w::%d\n",w,sizeof(w));
	x=malloc(sizeof(char*)*n);
		printf("x:::%u           sizeof x::%d\n",x,sizeof(x));}




