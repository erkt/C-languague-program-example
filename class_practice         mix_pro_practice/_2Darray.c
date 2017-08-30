#include<stdio.h>
/*void print(int *p, int r,int c)
{
	int i;
	for(i=0;i<r*c;i++)
		printf("%d ",p[i]);
	printf("\n");
}*/
void p1(int (*p)[3],int r,int c)
{
	int i,j;
	for(i=0;i<r;i++)
{		for(j=0;j<c;j++)
			printf("%d ",p[i][j]);
	printf("\n");
}
}
main()
{
	int i,r,c,j;
	int b[2][3];
	r=sizeof(b)/sizeof(b[0]);
	c=sizeof(b[0])/sizeof(b[0][0]);
	for(i=0;i<r;i++)
{		for(j=0;j<c;j++)
			scanf("%d",&b[i][j]);
	printf("\n");}
//	print(b,r,c);
	printf("\n-----------------------------------------------------------\n");
	p1(b,r,c);
	printf("\n-----------------------------------------------------------\n");
}
