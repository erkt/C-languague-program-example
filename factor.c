/////to find perfect number between 500 to 1.....6 = 3+2+1=6    28=14+7+4+2+1=28



#include<stdio.h>
main()
{
	
 int i,j,k,l,n;
	for(i=50000;i>=1;i--)
	{	
		for(n=i/2,l=0,j=0;n>=1;n--)
		{
			k=i%n;
			if(k==0)
			{	j=n;
				l=j+l;
			}
		}
		if (l==i)
			printf("%d  ",i);
	}
	printf("\n");
}	
