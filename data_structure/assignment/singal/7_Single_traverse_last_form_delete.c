/*7) Write a Singly linked list program to delete a perticular node from last and also find the count  of no.of nodes using only single traverse.
	Ex:  Suppose  if there are  7 nodes, and if 2nd node has to be delete from last, then it is  6th 
	        node from starting.
		Before delete  : A --- B --- C --- D --- E --- F --- G
		After delete    : A ---  B --- C --- D --- E --- G*/
#include"kt.h"
void delete(st **,int);
main()
{
	st *hptr=0;
	char ch;
	int n;
	do{
		add(&hptr);
		printf("Do you want add another node? (Y/N)\n");
		scanf(" %c",&ch);
	}while((ch=='y')||(ch=='Y'));
	traverse(hptr);
	printf("\n enter the node you want to delete from last position::");
	scanf("%d",&n);
	delete(&hptr,n);
	printf("After deleting nodes....\n");
	traverse(hptr);
}
void delete(st ** ptr,int n)
{
	static int i=0,count;
	st *temp=*ptr,*t;
	if(temp)
	{
		count++;
		t=temp;
		delete(&(temp->next),n);
		i++;
		if(i==n)
		{
			if(temp==*ptr)
				*ptr=temp->next;
			else
				t->next=temp->next;
			printf("No is deleted::%d\n",temp->i);
			free(temp);
			temp=NULL;
		}	
	}
	else
	{
		printf("Total nodes::%d\n",count);
	}
}
