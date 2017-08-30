//11) Write a program to reverse the data of only first 'M' no.of nodes of 'N' no.of nodes.  Input the 'M' value during runtime.
#include"kt.h"
void rev(st *,int);
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
	printf("Enter the how many node you want to reverse it...");
	scanf("%d",&n);
	rev(hptr,n);
	printf("After reversing the data\n");
	traverse(hptr);
}
void rev(st *ptr,int n)
{
	st *temp=ptr,t,*p,*dumm,*t1;
	int count=0,i=0,j=0;
	while(count<n)
	{t1=temp;
		temp=temp->next;
		count++;}
	printf("--%d--\n",count);
	temp=ptr;
	p=ptr;
	j=0;
	while(j<count/2)
	{
		p=ptr;i=0;

		while(i++<count-1)
			p=p->next;

		count--;

		t=*p;
		*p=*temp;
		*temp=t;

		dumm=p->next;
		p->next=temp->next;
		temp->next=dumm;

		temp=temp->next;
		j++;
	}
}


