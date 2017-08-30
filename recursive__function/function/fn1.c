#include<stdio.h>
int prime(int,int);
main()
{
	int n,r;
	printf("enter the number...........");
	scanf("%d",&n);
	r=prime(n,2);
	if(r)
		printf("no %d is prime",n);
	else
		printf("no %d is not prime",n);

	printf("\n");
}
int prime(int n,int i)
{
	int i;
	for (i=2;i<n;i++)
		if(n%i==0)
			return 0;

	if(n==i)
		return 1;
/*resursion function
	if(i<n)
	{
		if(n%i==0)
			return 0;
		prime(n,++i);
	}
		else
			return 1;
*/
}

