//8) Write a program to delete the duplicate nodes from sorted Singly linked list.
#include"kt.h"
void delete(st **);
main()
{
st *hptr=0;
char ch;
do{
sort(&hptr);
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
	int count,i,j,l;
	for(t=*ptr,count=0;t;t=t->next,count++);
	printf("Count::%d\n",count);
	t=t1=t2=*ptr;	
	while(t)
	{
		t2=t->next;
		t1=t;
		while(t2)
		{
			if(t->i == t2->i)
			{
				t1->next=t2->next;
				free(t2);
				t2=NULL;
			}
			else
			t1=t2;
			t2=t1->next;
		}
		t=t->next;
	}
}
