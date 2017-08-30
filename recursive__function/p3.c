/*3) Write a recursive function to find the sum of digits of a given number.
  example:::::num=123;;;;;1+2+3---6*/


#include<stdio.h>
int sod(int);
main()
{
	int n,r;
	printf("number::");
	scanf("%d",&n);
	r=sod(n);
	printf("num::%d\t Sod::%d\n",n,r);
}

int sod(int n)
{ 
	int c,k=1;
	if(n)
	{
		c=n%10;
		k=k+c;
		n=n/10;
		return (k+sod(n));
	}









/*	while(n)
	{
		c=n%10;
		k=k+c;
		n=n/10;
	}
	return k;
*/}
