#include<stdio.h>
#include<stdlib.h>
typedef struct st {

	int i;
	struct st *next,*prev;
}st;
void sort(st **ptr)
{

	st *new=(st *)malloc(sizeof(st));
	printf("Enter Data as Number::");
	scanf("%d",&new->i);
	
	if((*ptr==0)||( new->i   <  (*ptr)->i))
	{
		
		new->next=*ptr;
		new->prev=0;
		if(*ptr)
		(*ptr)->prev=new;
		*ptr=new;
	}
	else
	{
		st *last=*ptr;
		while((last->next)&&(last->next->i  <  new->i))
		last=last->next;
	
		new->prev=last;
		new->next=last->next;
		if(last->next)
		last->next->prev=new;
		last->next=new;
	}

}
void traverse(st *ptr)
{
	st *temp=ptr;
	printf("\n");
	while(ptr)
	{
	printf("%d   ",ptr->i);
//	printf("%d is %p address link with %p address\n",ptr->i,ptr,ptr->next);
	temp=ptr;
	ptr=ptr->next;
	}
	printf("\n");
	while(temp)
	{
	printf("%d   ",temp->i);
//	printf("%d is %p address link with %p address\n",temp->i,temp,temp->next);
	temp=temp->prev;	
	}
	printf("\n");
}
void begin(st **ptr)
{
	st *new=(st *)malloc(sizeof(st));
	printf("Enter Data as Number::");
	scanf("%d",&new->i);
	
	if(*ptr==NULL)
	{
		new->prev=new->next=NULL;
		*ptr=new;
		
	}
	else
	{
		new->prev=0;
		new->next=*ptr;
		(*ptr)->prev=new;
		*ptr=new;
	}
}	
void end(st **ptr)
{
	static st *last;
	st *new=(st *)malloc(sizeof(st));
	printf("Enter Data as Number::");
	scanf("%d",&new->i);

	if(*ptr==0)
	{
		new->prev=new->next=0;
		*ptr=new;
		last=new;
	}
	else
	{
		new->next=0;
		new->prev=last;
		last->next=new;
		last=new;
	}
}
