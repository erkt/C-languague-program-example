//10) Write a  program to reverse the data of given doubly linked list.
#include"K.h"
void rev_data(st *);
main()
{
	st *hptr=0;
	char ch;
	do{
		end(&hptr);
		printf("Add other node?? (Y/N)\n");
		scanf(" %c",&ch);
	}while((ch=='y')||(ch=='Y'));
	printf("before reversring....\n");
	traverse(hptr);
	rev_data(hptr);
	printf("After reversring....\n");
	traverse(hptr);
}
void rev_data(st *ptr)
{
	st *t=ptr,*t1;
	int i,count=0,temp;
	while(t)
	{
		t1=t;
		t=t->next;
		count++;
	}
	for(i=0,t=ptr;i<(count/2);i++)
	{
		temp=t->i;
		t->i=t1->i;
		t1->i=temp;
		t=t->next;
		t1=t1->prev;
	}
}

