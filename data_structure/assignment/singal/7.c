
	iiiEx:  Suppose  if there are  7 nodes, and if 2nd node has to be delete from last, then it is  6th 
	        node from starting.
		Before delete  : A --- B --- C --- D --- E --- F --- G
		After delete    : A ---  B --- C --- D --- E --- G*/
#include<stdio.h>
#include<stdlib.h>
typedef struct st{
	int i;	
	struct st* next;
}st;
void add(st **);
void traverse(st *);
void delete(st **,int);
main()
{
	st *hptr=0;
	char ch;
	int n;
	do{
		add(&hptr);
		printf("Do you want add another node? (Y/N)\n");
		scanf(" %c",&ch);
	}while((ch=='y')||(ch=='Y'));
	traverse(hptr);
	printf("\n enter the node you want to delete from last position::");
	scanf("%d",&n);
	delete(&hptr,n);
	printf("After deleting nodes....\n");
	traverse(hptr);
}
void delete(st**ptr,int n)
{
	int i=0,count;
	st *temp=*ptr,*t;
	while(temp)
	{
		temp=temp->next;
		i++;
	}
	temp=*ptr;
	count=i;
	printf("\t%d\n",i);
	for(i=0;i<(count-n);t=temp,temp=temp->next,i++);
	if(temp==*ptr)
		*ptr=temp->next;
	else
		t->next=temp->next;
	printf("Deleted Nodes::\t %d Data from last to  %d Number\n",temp->i,n);
	free(temp);
	temp=NULL;
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
void traverse(st *ptr)
{
	while(ptr)
	{
		printf("%d  ",ptr->i);
		ptr=ptr->next;
	}
	printf("\n");
}

