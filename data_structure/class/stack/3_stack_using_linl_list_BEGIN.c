////Stack using using ADD_begin(push) and delete(pop)
#include<stdio.h>
#include<stdlib.h>
typedef struct st{
int i;
struct st *next;
}st;
void push(st**);
void pop(st**);
void display(st*);
main()
{
st *hptr=0;
	int op;
	while(1)
	{	
		printf("Enter the option\n (1)push \t (2)pop \t (3) display \t (4) exit\n");
		scanf("%d",&op);
		switch(op)
		{
		default:break;
		case 1 :push(&hptr);
			break;
		case 2 :pop(&hptr);
			break;
		case 3 :display(hptr);
			break;
		case 4 :exit(0);
		
		}
	}
}
void display(st *ptr)
{
	if(ptr==NULL)
	{
		printf("Stack is empty.\n");
		return;
	}
	while(ptr)
	{
		printf("%d ",ptr->i);
		ptr=ptr->next;
	}
}
void pop(st **ptr)
{
	st *temp=*ptr;
	if(*ptr==NULL)
	{
		printf("Stack is underflow.\n");
		return;
	}
	if((*ptr)->next==NULL)
		*ptr=NULL;
	else
	*ptr=temp->next;
	printf("\t%d is Popped..\n",temp->i);
	free(temp);
	temp=NULL;
}
void push(st **ptr)	
{
	st *new=malloc(sizeof(st));
	printf("Enter DATA::");
	scanf("%d",&new->i);	
	new->next=*ptr;
	*ptr=new;
}
