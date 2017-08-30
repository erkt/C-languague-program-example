#include<stdio.h>
#include<stdlib.h>
typedef struct st{
	int n;
	struct st *next;
}ST;
void midle(ST**,int );
void tra(ST *);
main(){
	ST *hptr=0;
	char ch;
	int m;
	do{
		printf("Enter Data : ");
		scanf("%d",&m);
		midle(&hptr,m);
		printf("add other node :");
		scanf(" %c",&ch);
	}while(ch=='y');
	tra(hptr);
}
void tra(ST *hptr){
	while(hptr){
		printf("%d ",hptr->n);
		hptr=hptr->next;
	}
	printf("\n");
}
void midle(ST **hptr,int nu){
	ST *new=(ST*)malloc(sizeof(ST));
	new->n=nu;
	static ST *last;
	if(!*hptr||nu<(*hptr)->n){
		new->next=*hptr;
		*hptr=new;
	}
	else{
		ST *last=*hptr;
		while(last->next && (last->next->n < nu )) last=last->next;
		new->next=last->next;
		last->next=new;
	}
}
