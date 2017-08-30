/*5) Write a recursive function to that displays all the proper divisors of a given number
  exept that and returns their sum.
Ex: 1,3,5,9,15 & 45 are the proper divisors of 45.
sum = 1+3+5+9+15
= 33
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
		printf("sum::%d   perfect\n",sum);
	else
		printf("sum::%d   not perfect\n",sum);
	printf("\n");
}

int divp(int n)
{
	static sum,i=1;
	if(i<n)
	{
		if(n%i==0)
			sum=sum+i;
		i++;
		divp(n);
	}
	return sum;
}


