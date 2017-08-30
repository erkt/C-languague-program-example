///reverse the bits of the number....
#include<stdio.h>
main()
{
	int n,i,j,k,m;
	printf("enter the  number....");
	scanf("%d",&n);
	for(i=31;i>=0;printf("%d",n>>i&1),i--);
	printf("\nnumber before reverse....%d\n",n);
	for(i=0,j=31;i<j;i++,j--)
	{
		m=n>>i&1;
		k=n>>j&1;
		if(m!=k)
		{
			n=n^1<<i;
			n=n^1<<j;
		}

	}
	for(i=31;i>=0;printf("%d",n>>i&1),i--);
	printf("\nnumber after reverse....%d\n",n);

}
