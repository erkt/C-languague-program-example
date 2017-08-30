/*2) Write a recursive function to print the 'n'  fibonacci series numbers.*

  0 1 1 2 3 5 8 13 21 34 55 89 144 .....*/


#include<stdio.h>
void fibb(int);
main()
{
	int n,a=0,b=1;
//	printf("num--");
//	scanf("%d",&n);
//	printf("%d %d ",a,b);
		for(a=0;a<20;a++)
		printf("%d ",	fibbo(a));
			printf("\n");
}
int fibbo(int n)
{
if(n<=1)
return 1;
else
return fibbo(n-1)+fibbo(n-2);
}/*
void fibb(int m)
{
	static int c=0,k=0,a=0,b=1;
	if(k<m-2)
	{
		c=a+b;
		a=b;
		b=c;
		if(k<m-2)
			printf("%d ",c);
		k++;
		fibb(m);

	}
}*/
