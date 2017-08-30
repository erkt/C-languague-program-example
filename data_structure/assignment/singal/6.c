//6) Write a Singly linked list program to delete a perticular according to any signature of a given structure.
#include<stdio.h>
#include<stdlib.h>
typedef struct student{
	int num;
	char s[20];
	float f;
	struct student *next;
}st;
void add(st**);
void traverse(st*);
void delete(st **);
int srcm(char *p,char *q);
main()
{
	st *hptr=0;
	char ch;
	do{
		add(&hptr);
		printf("Do U want add other One? (Y/N)\n");
		scanf(" %c",&ch);
	}while((ch=='y')||(ch=='Y'));
	printf("Before Deleting....\n");
	traverse(hptr);
	delete(&hptr);
	printf("After Deleting....\n");
	traverse(hptr);
}
void traverse(st *ptr)
{
	while(ptr)
	{
		printf("No.:%d\tName:%s\tMarks%f\n",ptr->num,ptr->s,ptr->f);
		ptr=ptr->next;
	}
	printf("\n");
}
void add(st**ptr)
{
	static st *last;
	st *new=malloc(sizeof(st));
	printf("enter the number::");
	scanf("%d",&new->num);
	printf("Enter the name::");
	scanf("%s",new->s);
	printf("enter the marks::");
	scanf("%f",&new->f);
	if(*ptr==NULL)
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
void delete(st** ptr)
{
	int op,n;
	char s[20];
	float f;
	st *temp,*t;
	temp=t=*ptr;
	if(*ptr==NULL)
	{
		printf("Nodes not found..\n");
		return;
	}	
	printf("Enter option what you want delete.\n1)number\n2)name\n3)marks\n");
	scanf("%d",&op);
	if(op==1)
	{
		printf("Enter Number::");
		scanf("%d",&n);
		while(temp)
		{
			t=temp;
			temp=temp->next;
			if((*ptr)->num==n)
			{
				*ptr=(*ptr)->next;
				free(t);
				t=NULL;
				return;
			}
			if((temp)&&(temp->num==n))
			{
				if(*ptr==temp)
					*ptr=temp->next;
				else
					t->next=temp->next;
					free(temp);
					temp=NULL;
					return;
			}
		}
		if(temp==NULL)
		printf("Number is invalid...\n");
	}
	else if(op==2)
	{
		int i=0,k;
		printf("Enter Name::");
		scanf("%s",s);
		while(temp)
		{
			t=temp;
			temp=temp->next;
			if((k=srcm((*ptr)->s,s))==0)
			{
				*ptr=(*ptr)->next;
				free(t);
				t=NULL;
				return;
			}
			if((temp)&&((k=srcm(temp->s,s))==0))
			{
				if(temp==*ptr)
				*ptr=temp->next;
				else
				t->next=temp->next;
				free(temp);
				temp=NULL;
				return;
			}
			else
				if((k==1)&&(temp==0))
					{
						printf("Name is invalid..\n");
						return;	
					}
		}
	}
	else if(op==3)
	{
		printf("Enter marks::");
		scanf("%f",&f);
		while(temp)
		{
			t=temp;
			temp=temp->next;
			if((*ptr)->f==f)
			{
				*ptr=(*ptr)->next;
				free(t);
				t=NULL;
				return;
			}
			if((temp)&&(temp->f==f))
			{
				if(*ptr==temp)
					*ptr=temp->next;
				else
					t->next=temp->next;
					free(temp);
					temp=NULL;
					return;
			}
		}
		if(temp==NULL)
		printf("Number is invalid...\n");
	}
	else
	{
		printf("unknown option\n");
		return;
	}
	

}
int srcm(char *p,char *q)
{
	int i;
	for (i=0;p[i];i++)
		if(p[i]!=q[i])
			break;
	if(p[i]=='\0')
		return 0;
	else
		return 1;
}
