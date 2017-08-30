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
st *temp;
t3=p;
temp=p;
p=p->next;
while(p||p1)
{
	if(p1){
	t3->next=p1;
	t3->next->prev=t3;
	p1=p1->next;
	t3=t3->next;
	}
	if(p){
	t3->next=p;
	t3->next->prev=t3;
	p=p->next;
	t3=t3->next;
	}
}
return temp;
}
