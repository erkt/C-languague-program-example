////create multi node for add_end
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
static struct st *last;
void add_end();
void traverse();
main()
{
	char ch;
	do{
		add_end();
		printf("do you want to ADD one more node?(Y/N)\n");
		scanf(" %c",&ch);
	  }while((ch>='y')||(ch<='Y'));
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
//	ST->next=hptr;
//	hptr=ST;
	if(hptr==0)
	{
		ST->next=hptr;
		hptr=ST;
		last=ST;
	}
	else
	{
		ST->next=last->next;
		last->next=ST;	
		last=ST;
	}		
}
void traverse()
{
	while(hptr)
	{
		printf("R::%d  NAME::%s  marks::%f\n",hptr->r,hptr->n,hptr->f);
		hptr=hptr->next;	
	}
}
