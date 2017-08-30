//11) Write a program to reverse the data of only first 'M' no.of nodes of 'N' no.of nodes.   Input the 'M' value during runtime.
#include"K.h"
void rev_data(st *,int);
main()
{
st *hptr=0;
char ch;
int n;
do{
end(&hptr);
printf("add ohter node ?? (Y/N)\n");
scanf(" %c",&ch);
}while((ch=='y')||(ch=='Y'));
printf("before reversing...\n");
traverse(hptr);
printf("Enter the how many  node data reversing...\n");
scanf("%d",&n);
rev_data(hptr,n);
printf("after reversing...\n");
traverse(hptr);
}
void rev_data(st *ptr,int n)
{
	st *t,*t1;
	int i,count=0,temp;
	t=ptr;
	while(t)
	{
		if(count<n)
		t1=t;
		t=t->next;
		count++;
	}
	for(i=0,t=ptr;i<(n/2);i++)
	{
		temp=t->i;
		t->i=t1->i;
		t1->i=temp;
		
		t1=t1->prev;
		t=t->next;
	}
}
	
