//17) Wrtie a program to delete a node in a Circular Linked List.
#include<stdio.h>
#include<stdlib.h>
typedef struct st{
	int i;
struct st *next;
}st;
void end(st **);
void traverse(st *);
void delete(st **,int );
main()
{
st *hptr=0;
char ch;
int n;
do{
end(&hptr);
printf("add other node? (Y/N)\n");
scanf(" %c",&ch);
}while((ch=='y')||(ch=='Y'));
printf("before deleting...\n");
traverse(hptr);
printf("Enter the node no..\n");
scanf("%d",&n);
delete(&hptr,n);
printf("After deleting..\n");
traverse(hptr);
}
void end(st  **ptr)
{
	static st  *last,*last1;
	st *new=malloc(sizeof(st));
	printf("Enter data::");
	scanf("%d",&new->i);
	if(*ptr==NULL)
	*ptr=last=last1=new;
	new->next=last;
	last1->next=new;
	last1=new;
}
void delete(st **ptr,int n)
{
	st *last,*mod,*temp=*ptr;
	int i,count=0;
	while(temp->next!=*ptr)
	{
		if(count<n-1)
		last=temp;
		temp=temp->next;
		count++;
	}
	count++;
	printf("%d--\n",last->i);
	printf("Total node::%d\n",count);
//	temp=*ptr;
	if(n>count||count<0)
	{
		printf("Invalid Number..\n");
		return;
	}
	else
	{
		if((*ptr)==last)
		{
			(*ptr) = last->next;
			temp->next = *ptr;
			free(last);
			last = NULL;
		}
		else
		{
			mod=last->next;
			last->next=mod->next;
			free(mod);
			mod=NULL;
		}
	}
	
}	
void traverse(st *ptr)
{
	st *temp=ptr;
	while(temp->next!=ptr)
//	while(temp)
	{
		printf("%d-->",temp->i);
		temp=temp->next;
	}
	printf("%d\n",temp->i);
}
