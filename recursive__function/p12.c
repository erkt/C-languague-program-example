//12) Write a recursive function to revese the elements of a given array.
 
#include<stdio.h>
void rev (int*p,int l,int i)
{
	int temp;
	if(i<l)
	{
		temp=p[i];
		p[i]=p[l];
		p[l]=temp;
		rev (p,l-1,i+1);
	}
}


main()
{
	int n[10],i,l;
	printf("NUM::");
	l=sizeof(n)/sizeof(n[0]);
	for(i=0;i<l;i++)
		scanf("%d",&n[i]);
	rev(n,l-1,0);
	for(i=0;i<l;printf("%d ",n[i]),i++);
	printf("\n");
}
