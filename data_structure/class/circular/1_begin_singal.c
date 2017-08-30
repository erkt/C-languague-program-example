///circular add begin singal
#include<stdio.h>
#include<stdlib.h>
typedef struct sr{
  int i;
struct sr *next;}sr;
void begin(sr **);
void traverse(sr *);
main()
{
sr *hptr=0;
char ch;
do{
begin(&hptr);
printf("add other node?? (Y/N)\n");
scanf(" %c",&ch);
}while((ch=='y')||(ch=='Y'));
traverse(hptr);
}
void begin(sr **ptr)
{
	static sr *last;
	sr *new=malloc(sizeof(sr));
	printf("Enter data::");
	scanf("%d",&new->i);

/*	if(*ptr==NULL)
	*ptr=last=new;
	new->next=*ptr;	
	*ptr=new;
	last->next=new;
*/	if(*ptr==NULL)
	{
		new->next=new;
		last=new;
		*ptr=new;
	}
	else
	{
		new->next=*ptr;
		*ptr=new;
		last->next=new;
	}
/**/}
void traverse(sr *ptr)
{
	sr *temp=ptr;
	while(temp!=ptr->next)
	{
		printf("%d ",ptr->i);
		ptr=ptr->next;
	}
		printf("%d\n",ptr->i);
}
