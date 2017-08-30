/*4) Write a prorgram to swap 'k'th node from begining and 'k' node from end in a Singly linked list. For Ex: if nodes are
      A --- B --- C --- D --- E --- F --- G --- H --- I
 if k = 2 , then o/p should be 
      A --- H --- C --- D --- E --- F --- G --- B --- I*/ 
#include<stdio.h>
#include<stdlib.h>
typedef struct st{
	int i;	
	struct st* next;
}st;
void add(st **);
void traverse(st *);
void swap(st ** ,int);
main()
{
	st *hptr=0;
	int n,n1;
	char ch;
	do{
		add(&hptr);
		printf("Do you want add another node? (Y/N)\n");
		scanf(" %c",&ch);
	}while((ch=='y')||(ch=='Y'));
	traverse(hptr);
	printf("Enter the node from Beginning..\n");
	scanf("%d",&n);
	swap(&hptr,n);
	printf("After Swaping.........\n");
	traverse(hptr);
}
void add(st **ptr)
{
	static st *last;
	st * new=(st*)malloc(sizeof(st));
	printf("enter the number::");
	scanf("%d",&new->i);
	if(*ptr)
	{
		new->next=last->next;	
		last->next=new;
		last=new;
	}
	else
	{
		new->next=*ptr;
		*ptr=last=new;
	}
}
void swap(st **ptr ,int n )
{
	st *temp=*ptr,*t1=*ptr,*last,*l,*l1;
	int i=0,c=0;
	while(temp)
	{	temp=temp->next;
		c++;
	}
	temp=*ptr;
	while(i++<(n-1))
	{
		l=temp;
		temp=temp->next;
	}
	i=0;
	while(i++<(c-n))
	{
		l1=t1;
		t1=t1->next;
	}
	if(temp==*ptr)
	{
		*ptr=t1;
		last=t1->next;
		t1->next=temp->next;
		l1->next=temp;
		temp->next=last;
	}
	else
	{
		last=t1->next;
		if(temp->next!=NULL)
		{
			if(l1!=temp)
			{
				if(l==t1)
				{
				l1->next=temp;
				t1->next=temp->next;
				temp->next=t1;
				}
				else
				{	
				t1->next=temp->next;
				temp->next=last;
				l1->next=temp;
				l->next=t1;}
			}
			else
			{
				if(l!=t1)
				{	
				l->next=t1;
				t1->next=temp;
				temp->next=last;
				}
			}
		}	
		else{
			t1->next=temp->next;
			temp->next=last;
			l->next=t1;
			*ptr=temp;			
		}
	}
}
void traverse(st *ptr)
{
	while(ptr)
	{
		printf("%d  ",ptr->i);
		ptr=ptr->next;
	}
	printf("\n");
}

