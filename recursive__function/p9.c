/* 9)  A number is perfect if the sum of all its positive proper divisors is equal to the
           number. For example 28 is a perfect number since 28 = 1+2+4+7+14. Write a 
           recursive function that finds whether a number is perfect or not.
*/
#include<stdio.h>
int divp(int );
main()
{
	int n,i,k,sum;
	printf("number::");
	scanf("%d",&n);
	sum=divp(n);
	if(sum==n)
		printf("%d::%d    perfect\n",sum,n);
	else
		printf("%d::%d    not perfect\n",sum,n);
	printf("\n");
}

int divp(int n)
{
	static sum,i=1;
	if(n/2>=i)
	{
		if(n%i==0)
		{
		sum=sum+i;
		}
		i++;
		divp(n);
	}
	else
	return sum;
}


