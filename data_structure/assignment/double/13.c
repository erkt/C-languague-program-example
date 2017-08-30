//13) Write a program to reverse all links of given doubly linked list 	i) using loops 
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
st *t,*t1,*t2;
t=0;
t1=0;
t2=*ptr;
while(t2)
{
t=t1;
t1=t2;
t2=t2->next;
t1->next=t;
t1->prev=t2;	
}
*ptr=t1;
}
