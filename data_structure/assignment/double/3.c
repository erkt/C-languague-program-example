//3) Write a program to merge two double linked list.
#include"K.h"
st * merge(st *,st*);
int main()
{
	st *hptr=0,*hptr1=0,*hptr2=0;
	char ch;
	do{
		end(&hptr);
		printf("Do U want to Add other node in 1 link??   (Y/N)\n");
		scanf(" %c",&ch);
	}while((ch=='y')||(ch=='Y'));
	printf("1st link list........\n");
	traverse(hptr);
	do{
		end(&hptr1);
		printf("Do U want to Add other node in 2 link??   (Y/N)\n");
		scanf(" %c",&ch);
	}while((ch=='y')||(ch=='Y'));
	printf("2nd link list........\n");
	traverse(hptr1);
	hptr2=merge(hptr,hptr1);
	printf("After merge..\n");
	traverse(hptr2);
	return 0;
}
st *merge(st*p,st*p1)
{
st *t,*t1,*t3,*temp,*temp1;
t=p;
t1=p1;
t3=p;
while(t)
{
	temp=t->next;
	temp1=t1->next;
	if(temp){
	t->prev=t1->prev;
	t->next=t1;
	}
	printf("------------------------------------\n");	
	t1->prev=temp->prev;
	t1->next=temp;
	t=temp;
	t1=temp1;
}
return t3;
}
