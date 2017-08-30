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
	st *temp,*temp1,*t;
	int i=0,count=0,dumm;
	temp=*ptr;
	temp1=*ptr;
	while(temp)
	{
		temp=temp->next;
		count++;
	}
	if(n>=count)
		return;
	temp=*ptr;
	if(count!=n)
		while(i++<n)
			temp1=temp1->next;
	else
	{
		while(temp)
		{
			temp1=temp->prev;
			temp->prev=temp->next;	
			temp->next=temp1;
			temp=temp->prev;
		}
	*ptr=temp1->prev;
	return;
	}
	for (i=0,temp=*ptr;i<n;i++)
	{
		t=temp->prev;
		if(i!=n-1)
			temp->prev=temp->next;
		else 
			temp->prev=0;
		if(i==0)
		{
			if(count!=n){
			*ptr=temp1->prev;
			temp1->prev=temp;	
			temp->next=temp1;}
		}
		else
			temp->next=t;
		temp=temp->prev;
	}
}


	
