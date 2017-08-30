/*12) Write a  program to reverse the links of first 'N' no.of nodes of a given Singly linked list.
                 Before reverse : A --- B --- C --- D --- E --- F --- G --- H 
 If  M = 5, After reverse   :  E --- D --- C --- B --- A --- F --- G --- H  */
#include"kt.h"
void rev(st **,int);
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
printf("Before reversing...\n");
traverse(hptr);
printf("Enter the no of nodes you want to reverse it..\n");
scanf("%d",&n);
rev(&hptr,n);
printf("After reversing...\n");
traverse(hptr);
}
void rev(st ** ptr,int n)
{
	st *temp=*ptr,*t,*t1,*t2;
	int i=0,count=-1,j;
	while(count++,temp)
	temp=temp->next;
	printf("Count::%d\n",count);
	t=temp=t1=*ptr;
	for (i=0;i<n;t1=t1->next,i++);
	i=0;
	while(i<n)
	{
		t=t1;
		t1=*ptr;
		*ptr=(*ptr)->next;
		t1->next=t;
		i++;
	}
	
	*ptr=t1;
}

