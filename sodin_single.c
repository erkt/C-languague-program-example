/*3) Write a recursive function to find the sum of digits of a given number.
  example:::::num=123;;;;;1+2+3---6*/


#include<stdio.h>
int sod(int);
main()
{
	int n,r;
	printf("number::");
	scanf("%d",&n);
	((r=n%9)==9)||(r==0)?(printf("%d\n" ,9)):(printf("%d\n",n%9));


	r=sod(n);
	while(r>9)
	{
	 (r=sod(r));
	}
	printf("num::%d\t Sod::%d\n",n,r);
}
int sod(int n)
{ 
	int c,k=0;
	if(n)
	{
		c=n%10;
		k=k+c;
		n=n/10;
		return (k+sod(n));
	}
}
