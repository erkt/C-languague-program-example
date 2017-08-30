//write a singly linked list program to sort the nodes.
#include<stdio.h>
#include<stdlib.h>
struct st
{

	int r;
	//char n[20];
	//float f;
	struct st *next;
}data;
struct st *hptr=0,*dummy;
static struct st *last;
void add();
void traverse();
main()
{
	char ch;
	do{
		add();
		printf("\n");
	traverse();
		printf("do you want to ADD one more node????? (Y/N)\n");
		scanf(" %c",&ch);
	}while((ch=='y')||(ch=='Y'));
	traverse();
}
void add()
{
	struct st *ST= (struct st *)malloc(sizeof(struct st));
	struct st *temp,*t1;
	printf("Enter rollnumber :");
	scanf("%d",&ST->r);
	//	printf("Enter name :");
	//	scanf(" %[^\n]",ST->n);
	//	printf("Enter marks :");
	//	scanf("%f",&ST->f);
	if(hptr==0)
	{
		ST->next=hptr;
		hptr=ST;
	}
	else{
		if(hptr->r > ST->r)
		{
			ST->next=hptr;
			hptr=ST;
		}
		else
		{
			//temp=hptr->next;
			temp=hptr;
			if(temp->r == ST->r)
			{
				ST->next=temp->next;
				temp->next=ST;
			}
			else if(temp->r < ST->r)
			{
				//	temp=temp->next;
				while((temp->next==0 )||(temp->r < ST->r))
				{		
					t1=temp;
					if(t1->next==0)
						break;
					temp=temp->next;
				}
				if(t1->next==0)
				{
					ST->next=t1->next;
					t1->next=ST;
				}

				else{
					ST->next=t1->next;
					t1->next=ST;}
			}
			else if(temp->r > ST->r)
			{
				printf("SGHGFJSGFJHGFJFGJSGJSGFJFGJSFGJFGJHSFGFSJGFJ\n");
				ST->next=temp->next;
				temp->next=ST;
			}
		}
	}
}

void traverse()
{
	dummy=hptr;
	while(hptr)
	{
		//		printf("R::%d  NAME::%s  marks::%f\n",hptr->r,hptr->n,hptr->f);
		//		printf("R::%d   marks::%f\n",hptr->r,hptr->f);
		printf("%d  \n",hptr->r);
		hptr=hptr->next;	
	}
	hptr=dummy;
}
