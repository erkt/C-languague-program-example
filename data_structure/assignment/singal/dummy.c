/////only add node n print it
#include<stdio.h>
#include<stdlib.h>
typedef struct st{
	int i;	
	struct st* next;
}st;
void add(st **);
void traverse(st *);
main()
{
st *hptr=0;
char ch;
do{
add(&hptr);
printf("Do you want add another node? (Y/N)\n");
scanf(" %c",&ch);
}while((ch=='y')||(ch=='Y'));
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
void traverse(st *ptr)
{
	while(ptr)
	{
	printf("%d  ",ptr->i);
	ptr=ptr->next;
	}
	printf("\n");
}
 
