//7) Write a recursive function to print first 100 prime numbers.
#include<stdio.h>
void prime(int m ,int i);
main()
{
	int n;
	printf("enter the number::");
	scanf("%d",&n);
	prime(n,0);
	printf("\n");
}
void prime(int m ,int i)
{
	int j;
	if(m>0)
	{

		for(j=2;j<i;j++)
		{
			if(i%j==0)
				break;
		}
		if(i==j)
		{	
			if(m%20==0)
			printf("\n");
			printf("%d ",i);
			m--;
		}
	prime(m,++i);	
	}
}




