////create one node for add_end
#include<stdio.h>
#include<stdlib.h>
struct st
{

int r;
char n[20];
float f;
struct st *next;
}data;
struct st *hptr=0;
void add_end();
void traverse();
main()
{
	add_end();
	traverse();
}
void add_end()
{
	struct st *ST= (struct st *)malloc(sizeof(struct st));
	printf("Enter rollnumber :");
	scanf("%d",&ST->r);
	printf("Enter name :");
	scanf(" %[^\n]",ST->n);
	printf("Enter marks :");
	scanf("%f",&ST->f);
	ST->next=hptr;
	hptr=ST;
}
void traverse()
{
	while(hptr)
	{
		printf("R::%d  NAME::%s  marks::%f\n",hptr->r,hptr->n,hptr->f);
		hptr=hptr->next;	
	}
}
