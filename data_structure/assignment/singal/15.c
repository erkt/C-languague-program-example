//15) Write a Singly linked list program to implement Stack and Queue operations.
#include<stdio.h>
#include"kt.h"
void push(st**);
void pop(st**);
main(){
	st *hptr=0;
	int op;
	while(1){
		printf("\t1)PUSH \n\t2)POP\n\t3)Display\n\t4)exit\n");
		scanf("%d",&op);	
		if(op==1)
			push(&hptr);
		else if(op==2)
			pop(&hptr);
		else if(op==3)
			traverse(hptr);
		else if(op==4)
			break;
		else
			printf("enter proper input\n");
	}
}
void pop(st **ptr){
	if(*ptr==0)
		printf("Stack Empty!!\n");
	else {
		st *temp=*ptr;
		if((*ptr)->next==0){
			printf("Data %d poped..\n",(*ptr)->i);
			free(temp);
			*ptr=0;
		}
		else{
			st *te=(*ptr);
			while(temp->next){
				te=temp;
				temp=temp->next;
			}
			printf("Data %d poped..\n",temp->i);
			free(temp);
			te->next=0;
		}
	}
}
void push(st **ptr){
add(ptr);
}



