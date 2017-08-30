/*10) Write a recursive function to find the largest element in a given Unsorted array.*/
#include<stdio.h>
int big(int *n,int i)
{
	static int b;
	if(i)
	{
		if(b<n[i])
		{
			b=n[i];
			big(n,--i);
		}
		else
		{
			big(n,--i);
		}
	}
	else
	return b;
}

main()
{
	int n[10],i,j,b;
	printf("NUMBER::");
	j=sizeof(n)/sizeof(n[0]);
	for(i=0;i<10;i++)
		scanf("%d",&n[i]);
	b=big(n,j);
	for(i=0;i<10;printf("%d  ",n[i]),i++);
	printf("\n");
	printf("BIG::%d\n",b);

}




