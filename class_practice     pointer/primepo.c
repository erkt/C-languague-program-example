#include<stdio.h>
main()
{
	int a[5],i,j,k,l;
	printf("enter the number.....");
	l=sizeof(a)/sizeof(a[0]);
	for(i=0;i<l;i++)
		scanf("%d",&a[i]);
	for(i=0;i<l;i++)
		printf("%d ",a[i]);
	printf("\n");
	for(i=k=0;i<l;i++)
	{
		for(j=2;j<a[i];j++)
		{	if(a[i]%j==0)
			break;
		}
		if(a[i]==j)
			k++;
	}
	printf("%d",k);
	printf("\n");
}
