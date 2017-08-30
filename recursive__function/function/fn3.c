///SWAPING
#include<stdio.h>
void swap(int *, int *);
main()
{
	int n,m;
	printf("enter the first  number.......");
	scanf("%d",&n);
	printf("enter the second number.........");
	scanf("%d",&m);
	printf("before.......\nfirst nu...%d\n second nu...%d\n",n,m);
	swap(&n,&m);
	printf("after.......\nfirst nu...%d\n second nu...%d\n",n,m);
}
void swap(int *p,int *q)
{
	int temp;
	temp = *p;
	*p=*q;
	*q=temp;
}
