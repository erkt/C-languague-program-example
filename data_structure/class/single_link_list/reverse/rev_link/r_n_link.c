/////////reversre link up to give node number
#include<stdio.h>
#include<malloc.h>
typedef struct st{
int r;
struct st *next;
}st;
void add(st **);
int rev(st **,int);
void traverse(st *);
main()
{
int n;
char ch;
st *hptr=0;
do{
add(&hptr);
printf("Do You Want To ADD Another Node?    (Y/N)\n");
scanf(" %c",&ch);
}while((ch=='y')||(ch=='Y'));
traverse(hptr);
printf("up to how many node you want to revesre link?\n");
scanf("%d",&n);
n=rev(&hptr,n);
if (n==0)
return;
printf("AFTER::\n");
traverse(hptr);
}
void add(st **ptr)
{
	st *new=(st *)malloc(sizeof (st));
	static st *last;
	printf("Enter the Number::");
	scanf("%d",&new->r);
	if(*ptr==0)
	{
		new->next=*ptr;
		*ptr=new;
		last=new;
	}
	else
	{
		new->next=last->next;
		last->next=new;
		last=new;
	}
}
int rev(st **ptr,int n)
{
	st *p,*q=*ptr,*t;
	int i;
	for(i=0;i<n;i++)
	{
		q=q->next;
		t=q;
		if(q==0)
		{
			if(i<n-1){
				printf("Error:: Invalid 'n' value ...\n");
			return 0;}
			t=q;
		}
		
	}
	q=t;
	i=0;
	while(i<n)
	{
		p=q;
		q=*ptr;
		*ptr=(*ptr)->next;
		q->next=p;
		i++;
	}
	*ptr=q;
}
void traverse(st *ptr)
{
	while(ptr)
	{
		printf("%d   ",ptr->r);
		ptr=ptr->next;
	}
	printf("\n");
}

