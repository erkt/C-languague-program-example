/* 4  Write a C program to findout second largest and second smallest elements of an
      unsorted array without using any Sorting Technique.
*/
#include<stdio.h>
main()
{

	int n[10],i,j,k,k1,k2,k3,l,t;
	printf("enter the number....");
	l=sizeof(n)/sizeof(n[0]);
	for(i=0;i<l;i++)
		scanf("%d",&n[i]);
	for(i=0;i<l;i++)
		printf("%d ",n[i]);
	printf("\n");
	
	for(i=0,k=n[0];i<l;i++)
	{
		if(k<n[i])
		{
		k=n[i];	
		t=i;
		}
		
	}
	for(i=0,k1=n[0];i<l;i++)
	{
		if(t!=i)
		if(k1<n[i])
		k1=n[i];	
	}
	printf("Biggest  number...%d \t second biggest number...%d\n",k,k1);
	for(i=0,k=n[0];i<l;i++)
	{
		if(k>n[i])
		{
		k=n[i];	
		t=i;
		}
	}
	printf("===================%d===========\n",t);
	for(i=0,k1=n[0];i<l;i++)
	{
		if(t!=i)
		if(k1>n[i])
		k1=n[i];	
	}
	printf("smallest number...%d \t second smallest number...%d\n",k,k1);
	for(i=0;i<l;i++)
		printf("%d ",n[i]);
	printf("\n");
}
