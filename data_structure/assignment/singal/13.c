#include"kt.h"
void rev(st **);
main()
{
st *hptr=0;
char ch;
do{
	add(&hptr);
	printf("Do you want to other node? (Y/N)\n");
	scanf(" %c",&ch);

}while((ch=='y')||(ch=='Y'));
traverse(hptr);
rev(&hptr);
printf("After reversing...\n");
traverse(hptr);

}
void rev(st **ptr)
{
	st *t,*t1=0;
	while(*ptr)
	{
		t=t1;
		t1=*ptr;
		*ptr=(*ptr)->next;
		t1->next=t;
	}
	*ptr=t1;
}

