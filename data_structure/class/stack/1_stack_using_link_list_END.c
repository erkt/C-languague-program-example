//////stack operation push and pop using ADD_END Cocept(push) and delete(pop)
#include<stdio.h>
#include<stdlib.h>
typedef struct st{
int i;
struct st *next;
}st;
void push(st**);///add_end
void display(st*);
void pop(st**);///delete
main()
{
	st *hptr=0;
	char ch;
	while(1)	
	{
		printf("Enter the option.\n (p)PUSH\t(d)POP\t(s)DISPLAY\t(e)EXIT\n");
		scanf(" %c",&ch);
		switch(ch)	
		{
		default: return;
		case 'p': push(&hptr);
			break;
		case 'd': pop(&hptr);
			break;
		case 's':display(hptr);
			break;
		case 'e': exit(0);
			break;
		}
	}	
}
void push(st **ptr)
{
	st *new=malloc(sizeof(st));
	printf("Enter Data::");
	scanf("%d",&new->i);
	if(*ptr==0)
	{
		new->next=*ptr;
		*ptr=new;
	}
	else
	{
		st *last=*ptr;
		while(last->next)
		last=last->next;

		new->next=last->next;
		last->next=new;
	}

}
void pop(st **ptr)
{
	st *temp=*ptr,*t;
	if(*ptr==NULL)
	{
		printf("STACK is Underflow...\n");
		return;
	}
	if((*ptr)->next==NULL)
		*ptr=0;
	else
	{
		while(temp->next)
		{	t=temp;	
			temp=temp->next;
		}
		t->next=temp->next;
	}
	printf("%d is Popped..\n",temp->i);
	free(temp);
	temp=NULL;
}
void display(st *ptr)	
{
	if(ptr==NULL)
	{
		printf("STACK IS EMPTY..\n");
		return;
	}
	while(ptr)
	{
		printf("%d  ",ptr->i);
		ptr=ptr->next;
	}
}

