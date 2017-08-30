/*4) Write a recursive function to revese the given number..
  example:::::num=123;;;;;output;;;;;;;321*/


#include<stdio.h>
int sod(int, int);
main()
{
	int n,r,k=0;
	printf("number::");
	scanf("%d",&n);
	r=sod(n,k);
	printf("num::%d\t Sod::%d\n",n,r);
}

int sod(int n,int k)
{ 
	int c;
	c=n%10;
	k=k+c;
	n=n/10;
	if(n)
	sod(n,k*10);
	else return k;
}
