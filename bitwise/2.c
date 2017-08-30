//even or odd number
#include<stdio.h>
main()
{

	while(1)
	{
		int a;
		printf("Enter the value.....");
		scanf("%d",&a);
		a&1<<0?printf("Value %d is odd Number.....\n\n",a):printf("Value %d is even Number.....\n\n",a);
	}
}
