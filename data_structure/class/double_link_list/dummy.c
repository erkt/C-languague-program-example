//////DLL create and print..
#include<stdio.h>
#include<stdlib.h>
typedef struct st{
	int i;
	struct st *next,*prev;
}st;
void add(st **);
void traverse(st *);
void delete(st **);
main()
{
	st *hptr=0;
	char ch;
	do{
	add(&hptr);
	printf("do you want to add another node? (Y/N)\n");
	scanf(" %c",&ch);
	}while((ch=='y')||(ch=='Y'));
	traverse(hptr);
	
}
void add(st **ptr)
{
	static st *p;
	st *new=(st *)malloc(sizeof(st));
	printf("Enter the number::");
	scanf("%d",&new->i);
	if(*ptr==0)
	{
		new->prev=new->next=0;
		*ptr=new;
		p=new;
	}
	else
	{
		
		new->next=0;
		new->prev=p;
		p->next=new;
		p=new;
	}
}
void traverse(st  *ptr)
{
	st *t;
	while(ptr)
	{
	t=ptr;
	printf("%d  ",ptr->i);
	ptr=ptr->next;	
	}
	printf("\n Backward---\n");
	while(t)
	{
	printf("%d  ",t->i);
	t=t->prev;	
	}
}

