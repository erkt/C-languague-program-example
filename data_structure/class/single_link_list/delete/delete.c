/////delete the node
#include<stdio.h>
#include<stdlib.h>
typedef struct st{
	int i;	
	struct st* next;
}st;
void add(st **);
void traverse(st *);
st * delete(st *,int);
main()
{
	int n;
	st *hptr=0,*t;
	char ch;
	do{
		add(&hptr);
		printf("Do you want add another node? (Y/N)\n");
		scanf(" %c",&ch);
	}while((ch=='y')||(ch=='Y'));
	traverse(hptr);
	printf("You want to delete number? (Y/N)");
	scanf(" %c",&ch);
	if((ch=='y')||(ch=='Y'))
	{
		printf("Enter number::");
		scanf("%d",&n);
		t=delete(hptr,n);
	}
	if(t)
	{
		printf("After Deletation..\n");
		traverse(hptr);
	}
	else
		printf("No Is NOt Found..\n");
}
st * delete(st * ptr,int n)
{
	st *temp,*t,*l=ptr;
	if(n==ptr->i)
	{
		temp=ptr;
		t=ptr->next;
		free(temp);
		temp=NULL;
		return(t);
	}
	else
	{	
		t=ptr;
		temp=ptr->next;
		while((temp)&&(n!=temp->i))
		{
			t=temp;
			temp=temp->nex;
		}
		if(temp)
			t->next=temp->next;
		else
			return 0;

		free(temp);
		temp=NULL;
		return(l);
	}
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
		*ptr=new;
		last=new;
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

