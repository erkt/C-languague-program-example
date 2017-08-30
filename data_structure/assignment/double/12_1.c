//12) Write a  program to reverse the links of first 'N' no.of nodes of a given Singly linked list.
//                 Before reverse : A --- B --- C --- D --- E --- F --- G --- H 
// If  M = 5, After reverse   :  E --- D --- C --- B --- A --- F --- G --- H  
#include"K.h"
void rev(st** ,int);
main()
{
	st *hptr=0;
	int n;
	char ch;
	do{
		end(&hptr);
		printf("Add other node?? (Y/n)\n");
		scanf(" %c",&ch);
	}while((ch=='y')||(ch=='Y'));
	printf("Before reversing..\n");
	traverse(hptr);
	printf("Enter the no up to reversing node..\n");
	scanf("%d",&n);
	rev(&hptr,n);
	printf("after reversing..\n");
	traverse(hptr);
}
void rev(st **ptr,int n)
{
	st *r=0,*q=0,*p=*ptr,*temp=*ptr;
	int i=0,count=0,dumm=n;
	while(temp)
	{
		temp=temp->next;
		count++;
	}
	if(n>count)
	{printf("Invalid number.%d.\n",count);
		return;}
	p=p->next;
	while(dumm--)
	{
		r=q;
		q=p;
		p=p->next;
		q->next=r;
		q->prev=p;
	}
	(*ptr)=q;
//	q->next=0;
}
		



	
