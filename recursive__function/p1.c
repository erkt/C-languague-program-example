/*1) Write a recursive function to find the factorial of a given number..*/




#include<stdio.h>
int fact(int m)
{
	if(m>1)
		return(m*fact(m-1));
	else
		return 1;
}
main()
{
	int n,f;
	printf("num::");
	scanf("%d",&n);
	f=fact(n);
	printf("num::%d \t factorial of given num::%d\n",n,f);
}

