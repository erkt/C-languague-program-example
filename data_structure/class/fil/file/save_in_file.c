////save in file
#include<stdio.h>
#include<malloc.h>
typedef struct st{
int i;
struct st *next;
}st;
void add(st **ptr)
{
	st *new=(st *)malloc(sizeof(st));
	static  st *last;
	printf("enter number:");
	scanf("%d",&new->i);
	if(*ptr==0)
	{
		new->next=*ptr;
		last=new;
		*ptr=new;
	}
	else
	{
		new->next=last->next;
		last->next=new;
		last=new;
	}
}	
void traverse(st *);
main()
{
st *hptr=0;
char ch;
do{
add(&hptr);
printf("Do you want to add another node?   (Y/N)\n");
scanf(" %c",&ch);
}while((ch=='y')||(ch=='Y'));
traverse(hptr);

}
void traverse(st *p)
{
	FILE *fp=fopen("DATA","w");
	while(p)
	{
		fprintf(fp,"%d\n",p->i);
		p=p->next;
	}
	
}
