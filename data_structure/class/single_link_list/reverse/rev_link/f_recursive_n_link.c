/////////reversre link using recursion using recursive function uo to number
#include<stdio.h>
#include<malloc.h>
typedef struct st{
	int r;
	struct st *next;
}st;
void add(st **);
st *rev(st *,int,int);
void traverse(st *);
main()
{
	int n;
	char ch;
	st *hptr=0;
	do{
		add(&hptr);
		printf("Do You Want To ADD Another Node?    (Y/N)\n");
		scanf(" %c",&ch);
	}while((ch=='y')||(ch=='Y'));
	traverse(hptr);
	printf("Number Reverse it..\n");
	scanf("%d",&n);
	hptr=	rev(hptr,n,0);
	printf("AFTER::\n");
	traverse(hptr);
}
st *rev(st *ptr,int n,int i)
{
	//static st *p,*q=0;
	static st *p,*q,*t,*a;
	if(i<n)
	{
		p=q;
		q=ptr;
		a=ptr;
		t=q->next;
		ptr=ptr->next;
		q->next=p;
		rev(ptr,n,++i);
	}
	else
	{	

		if(q->next){
			q=q->next;
			rev(q->next,n,++i);
		}
		else{
			q->next=t;
			return(a);
		}
	}
}
void add(st **ptr)
{
	st *new=(st *)malloc(sizeof (st));
	static st *last;
	printf("Enter the Number::");
	scanf("%d",&new->r);
	if(*ptr==0)
	{
		new->next=*ptr;
		*ptr=new;
		last=new;
	}
	else
	{
		new->next=last->next;
		last->next=new;
		last=new;
	}
}
void traverse(st *ptr)
{
	while(ptr)
	{
		printf("%d   ",ptr->r);
		ptr=ptr->next;
	}
	printf("\n");
}

/*	p=q;
	while(p->next)
	p=p->next;
	p->next=t;*/	
