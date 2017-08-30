#include"kt.h"
void delete(st** ,int);
main()
{
	st *hptr=0;
	char ch;
	int n;
	do{
		add(&hptr);
		printf("add other (Y/N)\n");
		scanf(" %c",&ch);
	}while((ch=='y')||(ch=='Y'));
	printf("before delete....\n");
	traverse(hptr);
	printf("No delete..");
	scanf("%d",&n);
	delete(&hptr,n);
	printf("after delete..\n");
	traverse(hptr);
}
void delete(st**ptr,int n)
{
	st *t,*t1,*temp;
	t=t1=*ptr;
	int i=0,count=0;

	while(count!=n)
	{
		i++;
		t=t->next;
		count++;
	}
	if(t){
		while(t->next)
		{
			count++;
			t=t->next;
			t1=t1->next;
		}
		if(i==n)
		{
			temp=t1->next;
			t1->next=temp->next;
			free(temp);
			temp==NULL;
		}
	}
	else
	{
		temp=(*ptr);
		*ptr=temp->next;
		free(temp);
		temp=NULL;
	}
	//	printf("%d------%d\n",t->i,t1->i);
}
