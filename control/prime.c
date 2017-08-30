//////prime nuber
#include<stdio.h>
main()
{

	int i,n,b,k;
	/*printf("enter the value.....");
	  scanf("%d",&n);
	 */
	for(k=0,n=0;n<=1000;n++)
	{
		for(i=2;;i++)
			if(n%i==0)
				break;
		if(n==i)
		{
			printf("%d...",n);
			k++;
		}
	}
	printf("%d=k\n",k);
}
