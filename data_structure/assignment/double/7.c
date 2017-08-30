/* Write a Singly linked list program to delete a perticular node from last and also find the count  of no.of nodes using only single traverse.
	Ex:  Suppose  if there are  7 nodes, and if 2nd node has to be delete from last, then it is  6th 
	        node from starting.
		Before delete  : A --- B --- C --- D --- E --- F --- G
		After delete    : A ---  B --- C --- D --- E --- G*/
#include"K.h"
void del(st **,int);
main()
{
st *hptr=0;
char ch;
int n;
do{
end(&hptr);
printf("Add other Node? (Y/N)\n");
scanf(" %c",&ch);
}while((ch=='y')||(ch=='Y'));
printf("Before deleting..\n");
traverse(hptr);
printf("Enter the node from last to delete it..\n");
scanf("%d",&n);
del(&hptr,n);
printf("After deleting...\n");
traverse(hptr);
}
void del(st **ptr,int n)
{
	st *t,*t1,*t2;
	int i=0,count=1;
	t=t1=t2=*ptr;
	while(i++<(n)){
	t=t->next;
	count++;
	}
	printf("%d new start \n",t->i);
	while(t->next)
	{
		t1=t1->next;
		t=t->next;
		count++;
	}
	printf("%d after delete  %d last \n",t1->i,t->i);
	printf("Total count::%d\n",count);
	if(t2!=t1)
	{
		t2=t1->next;
		t1->next=t1->next->next;
		t1->next->prev=t1;
		printf("DEeletede number....%d\n",t2->i);
		free(t2);
		t2=NULL;
	}
	else
	{
		printf("No is not found..\n");
	}
}
