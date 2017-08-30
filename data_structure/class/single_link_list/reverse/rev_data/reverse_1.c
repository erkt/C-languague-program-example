/////half itteration of last  node found and reverse it
#include<stdio.h>
#include<malloc.h>
typedef struct st
{
	int n;
	struct st *next;
}ST;
void add(ST **);
void traverse(ST *);
void reverse(ST *);
main()
{
	ST * hptr=0;
	char ch;
	do{
		add(&hptr);
		printf("Do u want to add one more node?(Y/N)\n");
		scanf(" %c",&ch);
	}while((ch=='Y')||(ch=='y'));
	traverse(hptr);
	printf("\n");
	printf("You want to reverse it..(Y/N)\n");
	scanf(" %c",&ch);
	if((ch=='Y')||(ch=='y'))
		reverse(hptr);

	traverse(hptr);
	printf("AFTER...\n");

}
void add(ST **ptr)
{
	ST *new=(ST *)malloc(sizeof(ST));
	static ST *last;
	printf("Enter the number::");
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
void reverse(ST *ptr)
{
	ST *q,*p,*temp;
	int i,j,c=1,t;
	q=p=ptr;
	while(q->next)
	{
		c++;
		q=q->next;
	}
	q=ptr;
	for(i=0;i<(c/2);i++)
		q=q->next;
	if(c%2)
	temp=q->next;
	else
	temp=q;
	printf("%d\n",i);
	for(i=0;i<(c/2);i++)
	{
		for(j=0,q=temp;j<((c/2)-i-1);j++)
			q=q->next;
		t=p->n;
		p->n=q->n;
		q->n=t;
		p=p->next;
	}
}
void traverse(ST *ptr)
{
	while(ptr)
	{
		printf("%d   ",ptr->n);	
		ptr=ptr->next;
	}
}
