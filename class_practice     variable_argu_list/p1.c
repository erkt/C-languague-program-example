#include<stdio.h>
#include<stdarg.h>
int sum(int n , ...)
{
	int s=0,i,n1;
	va_list v;
	va_start(v,n);
	for(i=0;i<n;i++)
	{
		n1=va_arg(v,int);
		s=s+n1;
	}
	return s;
}
main()
{
	int i=20,j=30,k=90,l;
	l=sum(2,i,j);
	printf("l=%d\n",l);
	l=sum(3,i,j,k);
	printf("l=%d\n",l);
}


