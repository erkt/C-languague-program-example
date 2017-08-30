////merger to link list (single link list)
#include"kt.h"
st* merge(st *,st *);
main()
{
	st  * hptr=0,*hptr_1=0;
	char ch;
	do{
		add(&hptr);
		printf("Do you want to add another node?? (Y/N) \n");
		scanf(" %c",&ch);
	}while((ch=='y')||(ch=='Y'));
	traverse(hptr);////print 1 link
	printf("create new link\n ");
	do{
		add(&hptr_1);
		printf("Do you want to add another node?? (Y/N) \n");
		scanf(" %c",&ch);
	}while((ch=='y')||(ch=='Y'));
	traverse(hptr_1);/////print 2 link
	hptr=merge(hptr, hptr_1);
	printf("AFTER MERGES::\n");
	traverse(hptr);/////print merge link
}
st * merge(st *p,st *p1)////////////   1-b---2-c---3-d----4-0/////5-b---6-c---7-d----8-0
{
	st *t,*l,*q,*x;
	x=p;
	l=p1;
	while(p)
	{
		if(l==NULL)/////////////if not 2 link
			break;
		t=p->next;
		if(t!=NULL)///////////up to 1 link finish
			p->next=l;
		else
		{
			p->next=l;	
			break;}
		l=p1->next;
		p1->next=t;
		p=t;
		p1=l;
	}
	return x;
}
/*		t=p->next;
		if((l==NULL)||(t==NULL))
		break;
		p->next=l;
		l=p1->next;
		p1->next=t;
		p=t;
		p1=l;*/
