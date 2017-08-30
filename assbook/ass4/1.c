////////odd or even


#include<stdio.h>
main()
{
	int a,n,b;

	for (;a!=0;)
	{
		printf("enter the number...");
		scanf("%d",&a);
		if (a>>0&1)
			printf("%d is odd number...\n",a);
		else
			printf("%d is even number...\n",a);
	}
	printf("thanks\n");
}
