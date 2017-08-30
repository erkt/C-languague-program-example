////////////DLL add_middle
#include<stdio.h>
#include<stdlib.h>
typedef struct st{
	int i;
	struct st *next,*prev;
}st;
void add(st **);
void traverse(st *);
void add_middle(st *);
main()
{
	st *hptr=0;
	char ch;
	do{
		add(&hptr);
		printf("Do u know want to add another node?   (Y/N)\n");
		scanf(" %c",&ch);
	}while((ch=='y')||(ch=='Y'));
	traverse(hptr);
	do{	
		add_middle(hptr);
		printf("\nAfter Adding middle Node::\n");
		traverse(hptr);
		printf("\nDo you want to add node in between middle?     (Y/N)\n");
		scanf(" %c",&ch);
	}while((ch=='y')||(ch=='Y'));
}
void add(st **ptr)
{
	static st *last;
	st *new=(st*)malloc(sizeof(st));
	printf("Enter the number::");
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

void traverse(st *ptr)
{
	st *temp;
	while(ptr)
	{
		printf("%d  ",ptr->i);
		temp=ptr;
		ptr=ptr->next;
	}
	printf("\nBackward direction\n");
	while(temp)
	{
		printf("%d  ",temp->i);
		temp=temp->prev;
	}
	printf("\n");
}	
void add_middle(st *ptr)
{
	int i,c=0;
	st *temp=ptr;
	char ch;
	st *new=(st*)malloc(sizeof(st));
	printf("Enter the number::");
	scanf("%d",&new->i);
	for(;ptr;ptr=ptr->next,c++);
	for(i=0;i<(c/2);temp=temp->next,i++);
	if(c%2)
	{	printf("Add at right Side..(Y/N)\n");
		scanf(" %c",&ch);
		if((ch=='y')||(ch=='Y'))
			temp=temp->next;
	}
	new->prev=temp->prev;
	new->next=temp->prev->next;
	temp->prev->next=new;
	temp->prev=new;
}
