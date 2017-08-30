/** HEDEAR FILE */
#include<stdio.h>
#include<stdlib.h>
typedef struct st{
	int i;	
	struct st* next;
}st;
void begin(st **ptr)
{
	st *new=(st*)malloc(sizeof(st));
	printf("Enter the Number : ");
	scanf("%d",&new->i);
	new->next=*ptr;
	*ptr=new;
}
void add(st **ptr)
{
	static st *last;
	st * new=(st*)malloc(sizeof(st));
	printf("enter the number::");
	scanf("%d",&new->i);
	if(*ptr)
	{
		new->next=last->next;	
		last->next=new;
		last=new;
	}
	else
	{
		new->next=*ptr;
		*ptr=last=new;
	}
}
void traverse(st *ptr)
{
	while(ptr)
	{
	//printf("%d is link with next address %p\n ",ptr->i,ptr);
	printf("%d  ",ptr->i);
	ptr=ptr->next;
	}
	printf("\n");
}
void sort(st **ptr)
{
	st *new=(st *)malloc(sizeof(st));
	printf("Enter the number:");
	scanf("%d",&new->i);
	if((*ptr==0)||(new->i <(*ptr)->i))
	{
		new->next=*ptr;
		*ptr=new;
	}
	else
	{
		st *last=*ptr;
		while((last->next)&&(last->next->i  <  new->i ))	
		last=last->next;	
		new->next=last->next;
		last->next=new;
	}

} 
