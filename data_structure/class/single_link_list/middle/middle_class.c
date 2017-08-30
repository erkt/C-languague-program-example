#include<stdio.h>
#include<malloc.h>
typedef struct st
{
	int n;
	struct st *next;
}ST;
void add(ST **);
void print(ST *);
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
}
void add(ST **ptr)
{
	ST *new= (ST *)malloc(sizeof(ST));
	static ST *last;
	printf("Enter the Roll number::");
	scanf("%d",&new->n);
	if((*ptr==0)||(new->n <((*ptr)-> n)))
	{
		new->next=*ptr;
		*ptr=new;
		last=new;
	}
	else
	{
		ST * last=*ptr;
		while((last->next)&&(last->next->n < new->n))
		last=last->next;
		new->next=last->next;
		last->next=new;
		last=new;
	}
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
