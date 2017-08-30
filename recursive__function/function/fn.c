#include<stdio.h>
void binary(int);
main()
{
	int n;
	printf("enter the number");
	scanf("%d",&n);
	binary(n);
	printf("\n");
}
void binary(int num)
{
	int i;
	for (i=31;i>=0;i--)
		if(i%8)
			printf("%d",num>>i&1);
		else
			printf(" ");
}
