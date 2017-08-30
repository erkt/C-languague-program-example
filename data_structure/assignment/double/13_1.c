//13) Write a program to reverse all links of given doubly linked list 	i) using loops 
#include"K.h"
void rev(st **);
main()
{
st *hptr=0;
char ch;
do{
end(&hptr);
printf("add other one ?? (Y/N)\n");
scanf(" %c",&ch);
}while((ch=='y')||(ch=='Y'));
printf("Before reversing...\n");
traverse(hptr);
rev(&hptr);
printf("After reversing...\n");
traverse(hptr);
}
void rev(st ** ptr)
{
	st *temp,*temp1;
	temp=*ptr;
	while(temp)
	{
		temp1=temp->prev;
		temp->prev=temp->next;
		temp->next=temp1;
		temp=temp->prev;
	}
	*ptr=temp1->prev;
}
