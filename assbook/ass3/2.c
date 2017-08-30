/////positive negative number
#include<stdio.h>
main()
{
	int n;
	printf("enter the  number......");
	scanf("%d",&n);
	printf("number.....%d\n",n);
	if(n>>31&1)
	{
		printf("%d .... number is negative...\n",n);
	}
	else
	{
		printf("%d .... number is positive...\n",n);
	}
}

