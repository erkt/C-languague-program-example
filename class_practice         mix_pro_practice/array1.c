#include<stdio.h>
main()
{
	int n;
	printf("array size");
	scanf("%d",&n);
	int i,ele,a[n],b[n],c[n],j,k,j1,k1;
	ele=sizeof(a)/sizeof(a[0]);
	printf("enter the %d value ...",n);
	for(i=0;i<ele;i++)
		scanf("%d",&a[i]);
	for(i=0;i<ele;i++)
		printf("%d ",a[i]);
	printf("============\n");

	for(i=j=k=0;i<ele;i++)
	{
		if(a[i]%2==0)
		{	b[j]=a[i];
			j1=j++;}	
		else
		{
			c[k]=a[i];
		k1=k++;}
	}
	for(j=0;j<=j1;j++)
		printf("%d ",b[j]);
	printf("============\n");
	for(k=0;k<=k1;k++)
		printf("%d ",c[k]);
	
printf("============\n");
}
