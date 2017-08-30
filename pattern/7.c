/*	 *
 * a *
 * a * a *
 * a * a * a *
 */

#include<stdio.h>
main()
{
	int i,j,k,l,n;
	char ch;
	scanf("%d",&n);
	scanf(" %c",&ch);
	for(i=1;i<=n;i++)
	{
		for(k=1;k<=n-i;k++)
			printf("-");
		for(j=1;j<=2*i-1;j++)
		{
				if(j%2)
					printf("*");
				else
					printf("%c",ch);
}
		printf("\n");
	}
}

