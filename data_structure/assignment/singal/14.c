//14) Write a Singly linked list program to check the given linked list is palindrome or not.
#include"kt.h"
int palindrom(st*);
main()
{
	st * hptr=0,*h;
	char ch;
	int k;
	do{
		add(&hptr);
		printf("Do you want to add other node?????? (Y/N)\n");
		scanf(" %c",&ch);
	}while((ch=='y')||(ch=='Y'));
	printf("DATA::");
	traverse(hptr);
	k=palindrom(hptr);
	if(k==0)
		printf("This link list is not palindrom...\n");
	else
		printf("This link list is palindrom...\n");
}
int palindrom(st *ptr)
{
	st *temp,*t,*t1,*t2;
	t=t1=t2=temp=ptr;
	int count_node=0,i=0,j,k;
	for(count_node=0;temp;temp=temp->next,count_node++);////this for count a node....
	temp=ptr;

	j=k=count_node/2;////half of node count
	if(count_node%2==0)
		j=k-1;////if even 1 postion back
	while(i++<j)
		t1=t1->next;////potinter point to half of node position

	for(i=0;i<k;i++)////loop check for first and last equal or not
	{
		t2=temp;////for previous node 
		for(j=0,t=t1;j<(k-i);t=t->next,j++);////last node comapre every time decrement by 1 postion form last

		if(t->i != temp->i)////if not palindrom come out of loop
			break;
		temp=temp->next;
	}
	if((t->i==t2->i))//////////in for loop all are match check again preivous one bcoz temp++ by one position i.e,,take previous node 
		return 1;////if palindrom return 1
	else
		return 0;////not palindrom return 0;

}
