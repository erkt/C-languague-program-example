//1) Write a Doubly linked list programs for      ii) insert the nodes at end.
#include"K.h"
main()
{
	st *hptr=0;
	char ch;
	do{
		end(&hptr);
		printf("Do U want to ADD at end Node?? (Y/N)\n");
		scanf(" %c",&ch);
	}while((ch=='y')||(ch=='Y'));
	traverse(hptr);
}
