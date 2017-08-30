#include<stdio.h>
#include<stdlib.h>
typedef struct st{
int i;
struct st *next;
}st;
void end(st**);
void print(st*);
main()
{
st *hptr=0;
char ch;
do{
end(&hptr);
scanf(" %c",&ch);
}while(ch=='y') ;
print(hptr);
}
void end(st**ptr)
{
static st *last;
st * new=malloc(sizeof(st));
scanf("%d",&new->i);
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
void print(st *ptr)
{
	FILE *fp =fopen("data","w");
	if (fp)
	{	
		while(ptr)
		{
			printf("%d-->",ptr->i);
			fprintf(fp,"%d\n",ptr->i);
			ptr=ptr->next;
		}
	}	
	else{
	printf("File not presrent.\n");
	return;}
}
