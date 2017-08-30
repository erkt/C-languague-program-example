//13) Write a program to reverse all links of given doubly linked list        ii) using recursion. 
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
	static st *temp1;
	if(*ptr)
	{
		temp1=(*ptr)->prev;
		(*ptr)->prev=(*ptr)->next;
		(*ptr)->next=temp1;
		*ptr=(*ptr)->prev;
		rev(ptr);
	}
	else
	*ptr=temp1->prev;
}
