//2) Write a Singly linked list program to sort the nodes. (add_middle prog).
#include"kt.h"
main()
{
	st *hptr=0,*last;
	char ch;
	do{
		sort(&hptr);
		printf("Do U want to ADD one more node?(Y/N)\n");
		scanf(" %c",&ch);
	}while((ch=='Y')||(ch=='y'));
	traverse(hptr);
}
