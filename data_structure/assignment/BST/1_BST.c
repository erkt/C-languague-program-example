//BST
#include<stdio.h>
#include<stdlib.h>
typedef struct st{
	int i;
	struct st *left,*right;
}st;
void add(st **,int);
void post(st *);
void pre(st *);
void in(st *);
main()
{
	st *hptr=0;
	char ch;
	int num;
	do{
		printf("Enter data::");
		scanf("%d",&num);
		add(&hptr,num);
		printf("Add other (Y/N)\n");
		scanf(" %c",&ch);
	}while((ch=='y')||(ch=='Y'));
	printf("\nPost printing.....\n");
	post(hptr);
	printf("\nPre printing....\n");
	pre(hptr);
	printf("\nin printing...\n");
	in(hptr);
	printf("\n");
}
void add(st **ptr,int n) 
{
	if(*ptr==0)
	{
		*ptr=(st*)malloc(sizeof(st));
		(*ptr)->left=(*ptr)->right=0;
		(*ptr)->i=n;
	}
	else if((*ptr)->i <= n)
		add(&((*ptr)->right),n);
	else if((*ptr)->i > n)
		add(&((*ptr)->left),n);
}	
void post(st * ptr)
{
	if(ptr){
		post(ptr->left);
		post(ptr->right);
		printf("%d-->",ptr->i);
	}
}
void pre(st * ptr)
{
	if(ptr){
		printf("%d-->",ptr->i);
		post(ptr->left);
		post(ptr->right);
	}
}
void in(st * ptr)
{
	if(ptr){
		post(ptr->left);
		printf("%d-->",ptr->i);
		post(ptr->right);
	}
}
