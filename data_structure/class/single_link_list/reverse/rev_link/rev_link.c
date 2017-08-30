/////////reversre link
#include<stdio.h>
#include<malloc.h>
typedef struct st{
int r;
struct st *next;
}st;
void add(st **);
void rev(st **);
void traverse(st *);
main()
{
char ch;
st *hptr=0;
do{
add(&hptr);
printf("Do You Want To ADD Another Node?    (Y/N)\n");
scanf(" %c",&ch);
}while((ch=='y')||(ch=='Y'));
traverse(hptr);
rev(&hptr);
printf("AFTER::\n");
traverse(hptr);
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
void rev(st **ptr)
{
	st *p,*q=0;
	while(*ptr)
	{
		p=q;
		q=*ptr;
		*ptr=(*ptr)->next;
		q->next=p;
	}
	*ptr=q;
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

