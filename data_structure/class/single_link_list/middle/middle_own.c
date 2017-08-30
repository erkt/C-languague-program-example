#include<stdio.h>
#include<malloc.h>
typedef struct st
{
	int n;
	struct st *next;
}ST;
void add(ST **);
void print(ST *);
ST * middle(ST *);
main()
{
	ST *hptr=0,*last;
	char ch;
	do{
		add(&hptr);
		printf("Do U want to ADD one more node?(Y/N)\n");
		scanf(" %c",&ch);
	}while((ch=='Y')||(ch=='y'));
	print(hptr);
	do{
		printf("Do U want to ADD one more node at middle?(Y/N)\n");
		scanf(" %c",&ch);
		if((ch=='Y')||(ch=='y'))
		{
			last=middle(hptr);
			print(hptr);
		}
	}while((ch=='Y')||(ch=='y'));
}
void add(ST **ptr)
{
	ST *new= (ST *)malloc(sizeof(ST));
	static ST *last;
	printf("Enter the Roll number::");
	scanf("%d",&new->n);
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
ST * middle(ST *p)
{
	ST *new= (ST *)malloc(sizeof(ST)),*q=p;
	static ST *last;
	int i=1,c=1,temp;
	char ch;
	printf("Enter the Roll number::");
	scanf("%d",&new->n);
	while(q->next)
	{
		q=q->next;
		c++;
	}
	q=p;
	while(i<(c/2))
	{
		q=q->next;
		i++;
	}
	if(c%2)   ///right side add
	{
		printf("ADD at Right Side.(Y/N)\n");
		scanf(" %c",&ch);
		if((ch=='Y')||(ch=='y'))
			q=q->next;
	}
	new->next=q->next;
	q->next=new;
}
void print(ST *ptr)
{
	while(ptr)
	{
		printf("%d  ",ptr->n);
		ptr=ptr->next;
	}
	printf("\n");
}
