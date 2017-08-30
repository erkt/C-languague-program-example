/////circular double begin
#include<stdio.h>
#include<stdlib.h>
typedef struct st{
int i;
struct st *next,*prev;
}st;
void begin(st**);
void traverse(st*);
main()
{
st *hptr=0;
char ch;
do{
begin(&hptr);
printf("Add other one?? (Y/N)\n");
scanf(" %c",&ch);
}while((ch=='y')||ch==('Y'));
traverse(hptr);
}
void begin(st **ptr)
{
static st *last,*last1;
st *new=malloc(sizeof(st));
printf("Enter data:");
scanf("%d",&new->i);
if(*ptr==NULL)
{
	new->next=new;
	new->prev=new;
	last=new;
	last1=new;
	*ptr=new;
}
else
{
	new->next=last1;
	new->prev=last;
	*ptr=new;
	last->next=new;
	last1->prev=new;
	last1=new;
}
}
void traverse(st *ptr)
{
	st *temp;
	temp=ptr;
	while(ptr!=temp->next)
//	while(temp)
	{
//		sleep(1);
		printf("%d-->",temp->i);
		temp=temp->next;
	}
	printf("%d\n",temp->i);
	while(ptr->prev!=temp->prev)
	{
		printf("%d<-- ",temp->i);
		temp=temp->prev;
	}
	printf("%d\n",temp->i);
}	
