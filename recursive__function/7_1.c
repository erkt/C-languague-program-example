//7) Write a recursive function to print first 100 prime numbers.
#include<stdio.h>
void prime(int m ,int i);
main()
{
	int n;
	printf("enter the number::");
	scanf("%d",&n);
	prime(n,2);
	printf("\n");
}
void prime(int m ,int i)
{
	if(i<m)
	{
		if(m%i==0)
		{	
			printf("Not prime\n");
			return;	
			prime(m,++i);
		}
		else
			if(i==m)
				printf("prime::%d\n",i);
	}
}

