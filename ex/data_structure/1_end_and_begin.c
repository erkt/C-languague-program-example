#include<stdio.h>
#include<stdlib.h>
typedef struct st{
	int n;
	struct st *next;
}ST;
void add(ST **);
void begin(ST **);
void traverse(ST *);
main(){
	ST *hptr=0;
	ST *hpt=0;
	char ch;
	do{
		begin(&hpt);
		add(&hptr);
		printf("Enter New link\n");
		scanf(" %c",&ch);
	}while(ch=='y'||ch=='Y');
	printf("\nEND\n");
	traverse(hptr);
	printf("\nBEGIN\n");
	traverse(hpt);
	printf("\n");
}
void begin(ST **hpt){
	ST *ptr=(ST *)malloc(sizeof(ST));
	printf("Data\n");
	scanf("%d",&ptr->n);
	if(!*hpt){
		*hpt=ptr;
		ptr->next=0;	
	}
	else{
		ptr->next=*hpt;
		*hpt=ptr;
	}
}
void add(ST **hptr){
	static ST *last;
	ST *ptr=(ST *)malloc(sizeof(ST));
	printf("enter Data\n");
	scanf("%d",&ptr->n);

	if(!(*hptr)){
		*hptr=ptr;
		last=ptr;
		ptr->next=0;
	}
	else{
		last->next=ptr;
		ptr->next=0;
		last=ptr;
	}
}
void traverse(ST *hptr){
	while(hptr){
		printf("%d  ",hptr->n);
		hptr=hptr->next;
	}
}

