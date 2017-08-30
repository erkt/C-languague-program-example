#include<stdio.h>
main()
{
	int n;
	printf("array size");
	scanf("%d",&n);
	int i,ele,j,temp;
	char a[n];
	ele=sizeof(a)/sizeof(a[0]);
	printf("enter the %d value ...",n);
	for(i=0;i<ele;i++)
		scanf(" %c",&a[i]);
	for(i=0;i<ele;i++)
		printf("%c",a[i]);

	printf("\n=======================================\n");

	for(i=0,j=ele-1;i<j;i++,j--)
	{
		temp=a[i];
		a[i]=a[j];
		a[j]=temp;
	}
	for(i=0;i<ele;i++)
		printf("%c ",a[i]);

	printf("\n=======================================\n");

}
