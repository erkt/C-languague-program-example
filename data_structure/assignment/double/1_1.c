//1) Write a Doubly linked list programs for 	i) insert the nodes at begin.   
#include"K.h"
main()
{
	st *hptr=0;
	char ch;
	do{
		begin(&hptr);
		printf("Do U want ADD Begin node???? (Y/N)\n");
		scanf(" %c",&ch);
	}while((ch=='y')||(ch=='Y'));
	traverse(hptr);
}
