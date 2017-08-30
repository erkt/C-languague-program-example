/////queue using link list insertion and deletion  circular
#include<stdio.h>
#include<stdlib.h>
typedef struct st{
	int i;
	struct st *next;
}st;
	static st *last;
void enque(st **,int,int);/////insertion
int deque(st **);//////deletaion
void display(st *);
main()
{
	st *hptr=0;
	int op,n,m=0;
	printf("Enter the SIZE of Queue::");
	scanf("%d",&n);
	while(1)
	{
		printf("Enter option.\n 1)insert\t2)delete\t3)display\t4)exit\n");
		scanf("%d",&op);
		switch(op)
		{
			case 1:enque(&hptr,n,m);break;
			case 2:m= deque(&hptr);break;
			case 3:display(hptr);break;
			case 4:return;
			default:return;
		}
	}
}
void display(st *ptr)
{
	st *t=ptr;
	if(ptr==NULL)
	{
		printf("stack is empty\n");
		return;
	}
	while(ptr)
	{
		printf("%d  ",ptr->i);
		ptr=ptr->next;
	}
}
void enque(st**ptr,int n,int m)
{
	static int c;
	int i=0;
	c=c-m;
	st *temp=*ptr;
		if(*ptr)
		while(temp)
		{
			temp=temp->next;
			i++;
		}
	if(i==n)
	{
		printf("Stack is overflow\n");
		return;
	}
	else if(c==n)
	{
		printf("Stack is overflow\n");
		return;
	}
	st *new=malloc(sizeof(st));
	printf("Enter the data::");
	scanf("%d",&new->i);
	new->next=*ptr;
	*ptr=new;
	last=new;
	c++;
}
int deque(st**ptr)
{
	int i=0;
	st*temp=*ptr,*t;
	if(*ptr==NULL)
	{
		printf("stack is underflow\n");
		return;
	}
	if((*ptr)->next==NULL)
		*ptr=0;
	else
	{
		while(temp->next)
		{
			t=temp;
			temp=temp->next;
		}
		t->next=temp->next;
	}
	printf("%d is delete..\n",temp->i);
	free(temp);
	temp=NULL;
	return(++i);
}
