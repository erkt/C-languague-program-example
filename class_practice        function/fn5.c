/////elemente printing
#include<stdio.h>
void ar(int *,int);
main()
{
	int a[10],i,l;
	l=sizeof(a)/sizeof(a[0]);
	printf("enter the number.....%d\n",l);
	for(i=0;i<l;i++)
{		scanf("%d",&a[i]);
}
ar(a,l);
	printf("\n");
}
void ar(int *p,int n)
{
	int i;
	for(i=0;i<n;i++)
		printf("%d   ",p[i]);
}
