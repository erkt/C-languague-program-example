//+ve or -ve number
#include<stdio.h>
main()
{

	while(1)
	{
		int a;
		printf("Enter the value.....");
		scanf("%d",&a);
		a&1<<31?printf("Value %d is negative  Number.....\n\n",a):printf("Value %d is positive Number.....\n\n",a);
	}
}
