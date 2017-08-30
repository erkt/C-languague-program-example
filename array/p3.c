/*write a C program to input 10 numbers through the keyboard and find the number
  of prime numbers count, store  them into a seperate array and display it.*/
#include<stdio.h>
main()
{
	int n[10],m,i,j,k,p[10],l;
	printf("enter the number");
	for(i=0;i<10;i++)
		scanf("%d",&n[i]);
	printf("\n==========================\n");
	for(i=0;i<10;i++)
		printf("%d ",n[i]);
	printf("\n==========================\n");
	for(i=k=0;i<10;i++)
	{
		for(j=2;j<n[i];j++)
			if(n[i]%j==0)
				break;

		if(n[i]==j)
		{
			k++;
			printf("%d  ",n[i]);
			
		}
	}
	printf("\n==========================\n");
	printf("\ncount of prime number is %d\n",k);
}
