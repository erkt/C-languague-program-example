/*5) Write a Singly linked list program to swap the adjacent nodes.
 For Ex: if nodes are 
  A --- B --- C --- D --- E --- F --- G --- H --- I
 then o/p should be
  B --- A --- D --- C --- F --- E --- H --- G --- I*/
#include"kt.h"
void swap(st **);
main()
{
	char ch;
	st *hptr=0;
	do{
		add(&hptr);
		printf("Add other one?? (Y/N)\n");
		scanf(" %c",&ch);
	}while((ch=='y')||(ch=='Y'));
	printf("Before swaping...\n");
	traverse(hptr);
	swap(&hptr);
	printf("After swaping...\n");
	traverse(hptr);
}
void swap(st **ptr)
{
	st *t,*t1,*t2,*t3;
	t=t1=t2=*ptr;
	t1=t1->next;
	while(t->next)
	{
		if(*ptr==t)
		{
			t->next=t1->next;	
			t1->next=t;
			*ptr=t1;
		}
		else
		{
			t3=t;
			t=t->next;
			if(t->next==NULL){	
				t3->next=t;return;
			}
			t1=t->next;
			t->next=t1->next;
			t1->next=t;
			t3->next=t1;	
		}

	}
}
