#include<stdio.h>
main()
{
	int a[2][3],i,r,c,j;
	r=sizeof(a)/sizeof(a[0]);
	c=sizeof(a[0])/sizeof(a[0][0]);
	for(i=0;i<r;i++)
		for(j=0;j<c;j++)
			scanf("%d",&a[i][j]);
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
			printf("%d ",a[i][j]);
		printf("\n");
	}
	printf("a=%p -- %u\n",a);
	printf("&a=%p -- %u\n",&a);
	printf("a+1=%p -- %u\n",a+1);
	printf("&a+1=%p -- %u\n",&a+1);
	printf("a[0]=%p -- %u\n",a[0]);
	printf("a[0]+1=%p -- %u\n",a[0]+1);
	printf("a[0][0]=%p -- %u\n",a[0][0]);
	printf("a[0][0]+1=%p -- %u\n",a[0][0]+1);
	printf("&a[0]=%p -- %u\n",&a[0]);
	printf("&a[0]+1=%p -- %u\n",&a[0]+1);
	printf("a[1][1]=%p -- %u\n",a[1][1]);
	printf("*(a+1)=%p -- %u\n",*(a+1));
	printf("*(a[1]+1)=%p -- %u\n",*(a[1]+1));
	printf("*(*(a+1)+1)=%p -- %u\n",*(*(a+1)+1));
	printf("*(*(a+1))=%p -- %u\n",*(*(a+1)));
	printf("*(*a+1)=%p -- %u\n",*(*a+1));
	printf("**a+1=%p -- %u\n",**a+1);
}
