/////file to link 
#include<stdio.h>
#include<malloc.h>
typedef struct st{
	int i;
	struct st *next;	
}st;
void add(st **);
void traverse(st *);
FILE *fp;
main()
{
	st *hptr=0;
	 fp=fopen("DATA","r");
	if(fp==NULL)
	{
		printf(	"Data is over\n");
		return;
	}
	char ch;
	do{
		add(&hptr);
		printf("Do you want to add another node?   (Y/N)\n");
		scanf(" %c",&ch);
	}while((ch=='y')||(ch=='Y'));
	traverse(hptr);
}

void add(st **ptr)
{
	
	static int temp;
	static st *last;
	st *new=(st*) malloc(sizeof(st));
	printf("ADDRESS::%ld\n",ftell(fp));
	printf("Enter the number..\n");

	if((fscanf(fp,"%d",&new->i))!=EOF)
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
	else
	printf("\t\tData is Over\n");
}
void traverse(st *ptr)
{
	while(ptr)
	{
		printf("%d   ",ptr->i);
		ptr=ptr->next;
	}
	printf("\n");
}
