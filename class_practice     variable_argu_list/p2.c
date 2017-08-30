#include<stdio.h>
#include<stdarg.h>
int sum(int *n,...)
{
	int s=0,i,n1;
	va_list v;
	va_start(v,n);
	while(1)
	{
		n1=va_arg(v,int);
		if(n1==0)
		break;
		s=s+n1;
	}
	return s;
}
main()
{
	int i=20,j=30,k=90,l;
	l=sum(1,i,j,NULL);
	printf("l=%d\n",l);
	l=sum(5,i,j,k,NULL);
	printf("l=%d\n",l);
}


