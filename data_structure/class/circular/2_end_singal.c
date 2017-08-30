//circular  end 
#include<stdio.h>
#include<stdlib.h>
typedef struct st{
	int i;
	struct st *next;
}st;
void end(st **);
void traverse(st *);
main()
{
	st *hptr=0;
	char ch;
	do{
		end(&hptr);
		printf("add other node?? (Y/N)\n");
		scanf(" %c",&ch);
	}while((ch=='y')||(ch=='Y'));
	traverse(hptr);
}
void traverse(st *ptr)
{
	st *temp=ptr;
	while(ptr!=temp->next)
	{
		printf("%d\n",temp->i);
		temp=temp->next;
	}
	printf("%d\n",temp->i);
}
void end(st **ptr)
{
	static st *last;
	st *new=malloc(sizeof(st));
	printf("enter data::");
	scanf("%d",&new->i);
	if(*ptr==NULL)
	last=*ptr=new;
	
	new->next=*ptr;
	last->next=new;
	last=new;
/*	if(*ptr==0)
	{
		new->next=new;
		*ptr=new;
		last=new;
	}
	else
	{
		new->next=*ptr;
		last->next=new;
		last=new;
	}
*/}
