///////traverse function using recursion function
#include<stdio.h>
#include<malloc.h>
typedef struct st{
	int i;
	struct st *next;
}st;
void add(st**);
void traverse(st *);
main()
{
	st *hptr=0;
	char ch;
	do{
		add(&hptr);
		printf("Do U Want to add another node?    (Y/N)\n");
		scanf(" %c",&ch);
	}while((ch=='y')||(ch=='Y'));
	traverse(hptr);
}
void add(st **ptr)
{
	static  st *last;
	st *new=(st *)malloc(sizeof(st));
	printf("Enter the number::");
	scanf("%d",&new->i);
	if(*ptr!=0)
	{
		new->next=last->next;
		last->next=new;
		last=new;
	}
	else	
	{
		new->next=*ptr;
		last=new;
		*ptr=new;
	}
}
void traverse(st *ptr)
{
	if(ptr->next)
	{
		printf("%d   ",ptr->i);
		traverse(ptr->next);
	}
	else
		printf("\n");
}

