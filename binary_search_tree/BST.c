#include<stdio.h>
#include<stdlib.h>
typedef struct st
{
	struct st *left;
	int roll;
	struct st *right;	
}TREE;

TREE *parent;

void add_tree(TREE **ptr,int);
void pre_order(TREE *ptr);
void in_order(TREE *ptr);
void post_order(TREE *ptr);
TREE* search(TREE *,int );
void delete(TREE **ptr , int num);

int main()
{
	TREE *hptr = 0; int num; char ch;

	do{
	printf("Enter the number to insert in BST\n");	
	scanf("%d",&num);

	add_tree(&hptr,num);
	printf("Do you want to continue...\n");
	scanf(" %c",&ch);
	}while((ch == 'y') || (ch == 'Y'));

	if(hptr) {
	printf("\npre_order\n");
	pre_order(hptr);
	printf("\nin_order\n");
	in_order(hptr);
	printf("\npost_order\n");
	post_order(hptr);
	printf("\n");
	}
	else
	{
		printf("no contents are presented...\n");
		return;
	}

	printf("Do you want to search an element...\n");
	scanf(" %c",&ch);

	if((ch == 'y') || (ch == 'Y'))
	{
		printf("Enter the element\n");
		scanf("%d",&num);
		
		TREE *ptr = search(hptr,num);
		
		if(ptr)
		printf("num found   %d\n",ptr -> roll);
		else
		printf("num not found\n");	
	}

	printf("Do you want to delete a node...\n");
	scanf(" %c",&ch);

	if( (ch == 'y') || ( ch == 'Y'))
	{
		printf("Enter the element to delete...\n");
		scanf("%d",&num);

		delete(&hptr,num);
	}

	printf("After delete function...\n");

	if(hptr){
	printf("\npre_order\n");
	pre_order(hptr);
	printf("\nin_order\n");
	in_order(hptr);
	printf("\npost_order\n");
	post_order(hptr);
	printf("\n");
	}
	else
	{
		printf("no contents are presented...\n");
		return;
	}

	
}
void add_tree(TREE **ptr,int num)
{
	if(*ptr == 0)
	{
		*ptr = (TREE *)malloc(sizeof(TREE));
		(*ptr) -> left = (*ptr) -> right = 0;
		(*ptr) -> roll = num;
	}
	else if( (*ptr) -> roll < num )
	add_tree(&((*ptr) -> right),num);
	else
	add_tree(&((*ptr) -> left),num);
}
TREE* search(TREE *ptr,int num)
{

	if(ptr == NULL)
	return 0;

	else if(ptr -> roll == num)
	{
		parent = ptr;
		return ptr;
	}

	else if(ptr -> roll < num)
	{
		parent = ptr;
		return search(ptr -> right,num);
	}
	
	else 
	{
		parent = ptr;
		return search(ptr -> left,num);	
	}
}

void delete(TREE **ptr , int num)
{
	TREE *p, *q, *r;

	q = search(*ptr,num);

	if(q == 0)
	{
		printf("node is not presented...\n");
		return;
	}

	p = parent;

	if((q -> left != NULL  && q -> right != NULL) )
	{
		
		printf(" q -> left != NULL  && q -> right != NULL\n");
	
		r = q -> right;
		while(r -> left)
		{
			p = r;
			r = r -> left;
		}
		
		q -> roll = r -> roll;
		q = r;
		
	}

	if( q -> left == NULL && q -> right == NULL )
	{
		printf(" q -> left == NULL  && q -> right == NULL\n");

		if( q == p->left )
		p -> left = 0;
		else 
		p -> right = 0;

			free(q);
			q = NULL;
			return;
	}
	
	if( q -> left == NULL && q -> right != NULL )
	{
		printf(" q -> left == NULL  && q -> right != NULL\n");
		if(q == p -> left) 
		{
			p -> left = q -> right; 
			free(q);
			q = NULL;
			return;
		}
		else
		{
			p -> right = q -> right;
			free(q);
			q = NULL;
			return;
		}
	}
	
	if( q -> left != NULL && q -> right == NULL)
	{
		printf(" q -> left != NULL  && q -> right == NULL\n");
		if(q == p -> left)
		{
			p -> left = q -> left;
			free(q);
			q = NULL;
			return;
		}
		else
		{
			p -> right = q -> left;
			free(q);
			q = NULL;
			return;
		}
	}
		
}
void pre_order(TREE *ptr)
{
	if(ptr)
	{
		printf("%d-->",ptr -> roll);
		pre_order( ptr -> left);
		pre_order( ptr -> right);
	}
}
void in_order(TREE *ptr)
{
	if(ptr)
	{
		in_order( ptr -> left);
		printf("%d-->",ptr -> roll);
		in_order( ptr -> right);
	}
}
void post_order(TREE *ptr)
{
	if(ptr)
	{
		post_order( ptr -> left);
		post_order( ptr -> right);
		printf("%d-->",ptr -> roll);
	}
}
