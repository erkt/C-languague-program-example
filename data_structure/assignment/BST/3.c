#include<stdio.h>
#include<stdlib.h>
typedef struct tree{
	int i;
	struct tree *left,*right;
}tree;
tree *temp;
void end(tree **,int);
void post(tree*);
void pre(tree*);
void in(tree*);
tree* ser(tree*,int);
void del(tree*,int);
main()
{
	tree *hptr=0,*ans;
	char ch;
	int num;
	do{
		printf("enter the Number::");
		scanf("%d",&num);
		end(&hptr,num);
		printf("add other one? (Y/N)\n");
		scanf(" %c",&ch);
	}while((ch=='y')||(ch=='Y'));
	printf("\npost printing..");
	post(hptr);
	printf("\npre printing..");
	pre(hptr);
	printf("\nin printing..");
	in(hptr);
	printf("\n");
	{
		printf("enter the number you want to serach it....\n");
		scanf("%d",&num);
		ans=ser(hptr,num);
		if(ans)
			printf("%d is present at %p\n",num,ans);
		else
			printf("not present..\n");
	}
	{
		printf("enter the number you want to delete it....\n");
		scanf("%d",&num);
		del(hptr,num);
	printf("\npost printing..");
	post(hptr);
	printf("\npre printing..");
	pre(hptr);
	printf("\nin printing..");
	in(hptr);
	printf("\n");
	}
}
tree * ser(tree *ptr,int n)
{
	if(ptr==0)
		return 0;
	else if(ptr->i==n){
		temp=ptr;
		return ptr;}
	else if(ptr->i < n){
		temp=ptr;
		return ser(ptr->left,n);}
	else{
		temp=ptr;
		return ser(ptr->right,n);}
}
void end (tree **ptr,int n)
{
	if(*ptr==0){
		*ptr=(tree *)malloc(sizeof(tree));
		(*ptr)->left=(*ptr)->right=0;
		(*ptr)->i=n;
	}
	else if((*ptr)->i < n)
		end(&((*ptr)->left),n);
	else
		end(&((*ptr)->right),n);
}
void post(tree *ptr)
{
	if(ptr){
		post(ptr->left);
		post(ptr->right);
		printf("(%d------%p)-->",ptr->i,ptr);
	}
}
void pre(tree *ptr)
{
	if(ptr){
		printf("%d-->",ptr->i);
		pre(ptr->left);
		pre(ptr->right);
	}
}
void in(tree *ptr)
{
	if(ptr){
		in(ptr->left);
		printf("%d-->",ptr->i);
		in(ptr->right);
	}
}
void del(tree *ptr,int n)
{
	tree *p,*q,*r;
	q=ser(ptr,n);
	if(q==0){
		printf("No is not found\n");
		return;
	}
	p=temp;
	if((q->left !=0)&&(q->right!=0)){
		r=q->left;
		while(r->right){
			p=r;
			r->right;}
		q->i=r->i;
		q=r;
	}
	if((q->left ==0)&&(q->right==0)){
		if(q==p->left)
			p->left=0;

		else
			p->right=0;
		free(q);
		q=0;
		return;
	}
	if((q->left !=0)&&(q->right==0)){
		if(q==p->left){
			q->left=p->left;
			free(q);
			q=0;
			return;}
		else{
			q->right=p->left;
			free(q);
			q=0;
			return;}
	}
	if((q->left ==0)&&(q->right!=0)){
		if(q==p->right){
			q->left=p->right;
			free(q);
			q=0;
			return;}
		else{
			q->right=p->right;
			free(q);
			q=0;
			return;}
	}
}
