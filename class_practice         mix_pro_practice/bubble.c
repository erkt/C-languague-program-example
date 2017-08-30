#include<stdio.h>
main()
{
	int a[]={10,20,2,0,6356,2,356,56,6386,6},i,j,k,temp;
	for(i=0;i<sizeof(a)/sizeof(a[0]);i++)
		printf("%d   ",a[i]);
	printf("\n");

	for(i=0;i<sizeof(a)/sizeof(a[0]);i++)
	{
		for(j=0;j<(sizeof(a)/sizeof(a[0])-1);j++)
			if(a[j]<a[j+1])
			{temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
	}
	for(i=0;i<sizeof(a)/sizeof(a[0]);i++)
		printf("%d   ",a[i]);
	printf("\n");
}

