/////queue using link list insertion and deletion
#include<stdio.h>
#include<stdlib.h>
typedef struct st{
	int i;
	struct st *next;
}st;
void insert(st **);
void delete(st **);
void display(st *);
main()
{
st *hptr=0;
int op;
while(1)
{
printf("Enter option.\n 1)insert\t2)delete\t3)display\t4)exit\n");
scanf("%d",&op);
switch(op)
{
case 1:insert(&hptr);break;
case 2:delete(&hptr);break;
case 3:display(hptr);break;
case 4:return;
default:return;
}
}
}
void display(st *ptr)
{
if(ptr==NULL)
{
printf("stack is empty\n");
return;
}
while(ptr)
{
printf("%d  ",ptr->i);
ptr=ptr->next;
}
}
void insert(st**ptr)
{
st *new=malloc(sizeof(st));
printf("Enter the data::");
scanf("%d",&new->i);
new->next=*ptr;
*ptr=new;
}
void delete(st**ptr)
{
st*temp=*ptr,*t;
if(*ptr==NULL)
{
printf("stack is underflow\n");
return;
}
if((*ptr)->next==NULL)
*ptr=0;
else
{
while(temp->next)
{
t=temp;
temp=temp->next;
}
t->next=temp->next;
}
printf("%d is delete..\n",temp->i);
free(temp);
temp=NULL;
}
