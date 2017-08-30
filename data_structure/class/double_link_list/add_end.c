////DLL add_end
#include<stdio.h>
#include<stdlib.h>
typedef struct st{
int i;
struct st *next,*prev;
}st;
void add_end(st**);
void traverse(st*);
main()
{

st *hptr=0;
char ch;
do{
add_end(&hptr);
printf("Do you want to ad another node?   (Y/N)\n");
scanf(" %c",&ch);
}while((ch=='y')||(ch=='Y'));
traverse(hptr);
}
void add_end(st **ptr)
{
	st *new=(st*)malloc(sizeof(st));
	printf("enter number::");
	scanf("%d",&new->i);
	if(*ptr==0)
	{
		new->next=new->prev=0;
		*ptr=new;
	}
	else
	{
		st *last;
		while(last->next)
		last=last->next;

		new->prev=last;
		last->next=new;
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
	printf("\n backward \n");
	while(temp)
	{	
		printf("%d  ",temp->i);
		temp=temp->prev;
	}
}
			

