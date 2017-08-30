///// 0 1 1 2 3 5 8 13 21 34 55......
#include<stdio.h>
main()
{
	int a,b,c,d,i,n;
	printf("enter the 1st value....");
	scanf("%d",&a);
	printf("enter the 2nd value....");
	scanf("%d",&b);
	printf("enter the range....");
	scanf("%d",&n);
	printf("%d %d ",a,b);
	/*	for(i=0;i<n;i++)
	{
		c=a+b;
		a=b;
		b=c;
		if(c<n)
			printf("%d ",c);
		else
			break;	
	}*/


	c=0;
	while(c<n)
	{
		c=a+b;
		a=b;
		b=c;
		if(c<n)
			printf("%d ",c);
		else
			break;
	}

	printf("\nthank you\n");
}

