/// double link list      add_begin
#include<stdio.h>
#include<stdlib.h>
 typedef struct st{
int i;
struct st *next,*prev;
}st;
void add_begin(st**);
void traverse(st*);
main()
{
st *hptr=0;
char ch;
do{
add_begin(&hptr);
printf("Do U want to add another Node?  (Y/N)\n");
scanf(" %c",&ch);
}while((ch=='y')||(ch=='Y'));
traverse(hptr);
}
void add_begin(st **ptr)
{
	st *new=(st*)malloc(sizeof(st));
	printf("Enter number::\n");
	scanf("%d",&new->i);
	if(*ptr==0)
		new->next=new->prev=*ptr;
	else
	{
		new->prev=0;
		new->next=*ptr;
		(*ptr)->prev=new;
	}
	*ptr=new;
}
void traverse(st *ptr)
{
	st *temp;
	while(ptr)	
	{
		printf("%d   ",ptr->i);
		temp=ptr;
		ptr=ptr->next;
	}
	printf("Backward direction..\n");	
	while(temp)
	{
		printf("%d   ",temp->i);
		temp=temp->prev;
	}
}
