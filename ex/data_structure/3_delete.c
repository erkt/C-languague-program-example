#include<stdio.h>
#include<stdlib.h>
typedef struct st{
	int n;
	struct st *next;
}ST;
void add(ST **);
void tr(ST *);
int dlt(ST**,int);
main(){
	ST *hptr=0;
	char r;
	int n1;
	do{
		add(&hptr);
		scanf(" %c",&r);
	}while(r=='y');
	printf("BEFORE :");
	tr(hptr);
	printf("want to delete..\n");
	scanf(" %c",&r);
	if(r=='y'){
		scanf("%d",&n1);
		printf("AFTER :");
		if(dlt(&hptr,n1))
		 printf("Not Found\n");	
		else
		tr(hptr);	
	}
}
void tr(ST *hpr){
	while(hpr){
		printf("%d ",hpr->n);
		hpr=hpr->next;
	}
	printf("\n");
}
void add(ST **hpr){
	static ST  *last;
	ST *new=malloc(sizeof(ST));
	scanf("%d",&new->n);
	if(!*hpr){
		*hpr=new;
		new->next=0;
		last=new;
	}
	else{
		last->next=new;
		new->next=0;
		last=new;
	}
}
int dlt(ST **hptr,int num){
	ST *last=*hptr,*pre=*hptr;
	int n22=0;
	while(last ){ 
		if(num==last->n){
			n22++;
			if(*hptr==last) *hptr=last->next;
				ST *temp=last;
				last->n=0;
				pre->next=last->next;
				free(temp);
				temp=0;
				last=pre->next;
		}
		else{
			 pre=last;
			 last=last->next;
		}
	}
	if(!n22) return 1;	
}
