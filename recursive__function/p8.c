//8) Write a recursive function to print the palindrome numbers in a given numbers.
#include<stdio.h>
int pali(int m)
{
	int c;
	static int s;
	if(m>0)
	{
		c=m%10;
		s=s*10+c;
		pali(m/10);
	}
	else
		return s;
}
main()
{
	int n,k;
	printf("NUM::");
	scanf("%d",&n);
	k=pali(n);
	if(k==n)
		printf("NUM::%d is palindrome",n);
	else
		printf("NUM::%d is not  palindrome",n);
	printf("\n");
}
