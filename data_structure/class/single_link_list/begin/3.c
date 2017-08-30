// create a data record for student using linked list
#include<stdio.h>
#include<stdlib.h>
typedef struct st
{
int r;
char n[20];
float m;
struct st * next;
}ST;
void add_begin(ST **);
void Traverse(ST *);

main()
{
	ST *hptr=0;/////locally declare
	char ch;
	do{
		add_begin(&hptr);//pass address of hptr
		printf("Do you want to ADD another Node(Yes/No)???\n");
		scanf(" %c",&ch);
	  }while((ch=='y'||ch=='Y'));
	Traverse(hptr);
}
void add_begin(ST **hptr)///catched with double pointer 
{
	ST *n=(ST *)malloc(sizeof(ST));
	printf("Enter the Roll Number::");
	scanf("%d",&n->r);
	printf("Enter the Name::");
	scanf(" %[^\n]",n->n);
	printf("Enter the Marks::");
	scanf("%f",&n->m);
	n->next=*hptr;
	*hptr=n;
}
void Traverse(ST *hptr)
{
	ST *p=hptr;
	while(p)
	{
		printf("R.no::%d  	Name::%s	Marks::%f\n",p->r,p->n,p->m);
		p=p->next;
	}
}
		
