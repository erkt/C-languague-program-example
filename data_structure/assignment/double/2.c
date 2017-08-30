//2) Write a Double linked list program to sort the nodes. (add_middle prog).
#include"K.h"
main()
{
	st * hptr=0;
	char ch;
	do{
		sort(&hptr);
		printf("Do you want ADD node??  (Y/N)\n");
		scanf(" %c",&ch);
	}while((ch=='Y')||(ch=='y'));
	traverse(hptr);
}
