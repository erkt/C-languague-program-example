#include<stdio.h>
#include<stdlib.h>
main()
{
	int r,c,**p,i,j;
	printf("enter row::");
	scanf("%d",&r);
	printf("enter columm::");
	scanf("%d",&c);
	p=malloc(sizeof(int*)*r);
	for(i=0;i<r;i++)
		p[i]=malloc(sizeof(int)*c);

	for(i=0;i<r;i++)
		for(j=0;j<c;j++)
			scanf("%d",&p[i][j]);


	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
			printf("%d ",p[i][j]);
		printf("\n");
	}
}
