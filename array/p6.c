/* 6  C program to delete an element at desired position from an array.*/
#include<stdio.h>
main()
{
	int a[10],i,l,n,j,k;
	printf("enter the number ...");
	l=sizeof(a)/sizeof(a[0]);
	for(i=0;i<l;i++)
		scanf("%d",&a[i]);
	printf("enter the you want delete number...");
	scanf("%d",&n);
	printf("\n===number printing===============================================================\n");
	for(i=0;i<l;i++)
		printf("%d ",a[i]);
	printf("\n=======delete number printing===========================================================\n");
	for(i=0;i<l;i++)
	{
		if (a[i]==n)
		{
			a[i]=0;
			k=i;
//			printf("%d",a[i]);
		printf("%c",' ');
			printf("%c",' ');
	}
		else
			printf("%d ",a[i]);
	}
	for(j=k;j<l;j++)
		a[j]=a[j+1];
printf("\n======remove location & printing============================================================\n");
	for(i=0;i<l-1;i++)
		printf("%d ",a[i]);
	printf("\n==================================================================\n");
}
