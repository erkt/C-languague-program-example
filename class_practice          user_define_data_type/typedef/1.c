#include<stdio.h>
typedef int *IPTR;
main()
{
	int i=10,j=20;
	IPTR p,q;
	p=&i;
	q=&j;
	printf("%d %d\n",*p,*q);

}
