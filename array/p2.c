/* Write a C program to input 10 numbers through the keyboard into an array and find the 
   biggest and smallest number in an Unsorted array without using any Sorting Technique.*/
#include<stdio.h>
main()
{

	int n[10],i,j,k,a,temp,l;
	printf("enter the number....");
	l=sizeof(n)/sizeof(n[0]);
	for(i=0;i<l;i++)
		scanf("%d",&n[i]);
	for(i=0;i<l;i++)
		printf("%d ",n[i]);
	printf("\n");
	k=n[0];
	for(i=0;i<l;i++)
	{
		if(k<n[i+1])
			k=n[i+1];	
	}
	a=n[0];
	for(i=0;i<l;i++)
	{
		if(a>n[i+1])
			a=n[i+1];	
	}

	printf("Smallest  number...%d\n",a);
	printf("Biggest  number...%d\n",k);
}
