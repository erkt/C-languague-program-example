//9) Write a program to delete the duplicate nodes from unsorted Singly linked list.
#include"kt.h"
void delete(st **);
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
	printf("After deleting..\n");
	delete(&hptr);
	printf("After deleting..\n");
	traverse(hptr);
}
void delete(st **ptr)
{
	st *t,*t1,*t2;
	t1=*ptr;
	while(t1)	
	{
		printf("IN.....\n");
		t2=t1->next;
		t = t1;
		while(t2)
		{
			if(t1->i == t2->i)
			{
				printf("%d---\n",t2->i);
				t->next=t2->next;
				free(t2);
				t2=NULL;
			}
			else
				t = t2;
				t2 = t->next;
		}
		t1=t1->next;
	}
}
