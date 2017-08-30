//14) Write a Singly linked list program to check the given linked list is palindrome or not.
#include"K.h"
int palindrom(st*);
main()
{
st *hptr=0;
char ch;
int j;
do{
end(&hptr);
printf("add other NODE??  (Y/N)\n");
scanf(" %c",&ch);
}while((ch=='y')||(ch=='Y'));
j=palindrom(hptr);
if(j)
printf("link list is palindrom..\n");
else
printf("link list is not palindrom..\n");
traverse(hptr);
}
int palindrom(st *ptr)
{
	st *temp,*t=ptr;
	int count=0,i;
	while(t)
	{
		temp=t;
		t=t->next;
		count++;
	}
	printf("----%d----\n",temp->i);
	for(i=0,t=ptr;i<(count/2);i++)
	{
		if(t->i != temp->i)
		break;	
		t=t->next;
		temp=temp->prev;
	}
	if(t->i==temp->i)
	return 1;
	else
	return 0;
}
