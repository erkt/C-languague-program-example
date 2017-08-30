///circular end double
#include<stdio.h>
#include<stdlib.h>
typedef struct st{
	int i;
	struct st *next,*prev;
}st;
void end(st **);
void traverse(st *);
main()
{
st *hptr=0;
char ch;
do{
	end(&hptr);
	printf("add othe node?? (Y/N)\n");
	scanf(" %c",&ch);
}while((ch=='y')||(ch=='Y'));
traverse(hptr);
}
void end(st**ptr)
{
	static st*last,*last1;
	st *new=malloc(sizeof(st));
	printf("enter data::");
	scanf("%d",&new->i);

	if(*ptr==NULL)
	{
		
		new->next=new;
		new->prev=new;
		last=last1=new;
		*ptr=new;
	}
	else
	{
		new->prev=last1;
		new->next=last;
		last->prev=new;
		last1->next=new;
		last1=new;
	}
}
void traverse(st *ptr)
{
	st *temp,*temp1;
	temp=ptr;
	while(ptr!=temp->next)
	{
		temp1=temp;
		printf("%d-->",temp->i);
		temp=temp->next;
	}
	printf("%d\n",temp->i);
	temp1=temp;
	while(ptr->prev!=temp->prev)
	{
		printf("%d<--",temp->i);
		temp=temp->prev;
	}
	printf("%d\n",temp->i);
}
