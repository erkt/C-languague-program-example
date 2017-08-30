#include<stdio.h>
main()
{
	int a[5],i,j,k,temp;
	k=sizeof(a)/sizeof(a[0]);
	for(i=0;i<k;i++)
		scanf("%d",&a[i]);
	for(i=0;i<k;i++)
		printf("%d   ",a[i]);
	printf("\n");
	for(i=0;i<k;i++)
	{
		for(j=i;j<k;j++)
			if(a[i]>a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
	}
	for(i=0;i<k;i++)
		printf("%d   ",a[i]);
	printf("\n");
}

