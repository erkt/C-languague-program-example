//////DLL delete..
#include<stdio.h>
#include<stdlib.h>
typedef struct st{
	int i;
	struct st *next,*prev;
}st;
void add(st **);
void traverse(st *);
void delete(st **,int);
main()
{
	st *hptr=0;
	int n;
	char ch;
	do{
	add(&hptr);
	printf("do you want to add another node? (Y/N)\n");
	scanf(" %c",&ch);
	}while((ch=='y')||(ch=='Y'));
	traverse(hptr);
	printf("\nenter the number you want to delete::");
	scanf("%d",&n);
	delete(&hptr,n);	
	traverse(hptr);
}
void delete(st ** ptr,int n)
{
 st *p,*temp;
	if(*ptr==NULL)
	{
		printf("LINK is Blank..\n");
		return;
	}
	if(n==(*ptr)->i)
	{	
		temp=*ptr;
		(*ptr)->next->prev=0;
		*ptr=(*ptr)->next;
		if(*ptr)
		(*ptr)->prev=0;
		free(temp);
		temp=NULL;
	}			
	else //////////////0-10-b-----a-20-c----b-30-0
	{
		p=*ptr;
		temp=(*ptr)->next;	
		while((temp)&&(n!=temp->i))
		{
			p=temp;
			temp=temp->next;
		}
		if(temp==NULL)
		{
			printf("Number is not found in this link list.\n");
			return;
		}
			temp->next->prev=temp->prev;
			temp->prev->next=temp->next;
			free(temp);
			temp=NULL;
	}	                                                                                                                                                                                                                                        
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
	printf("\n");
}

