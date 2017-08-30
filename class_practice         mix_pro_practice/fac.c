#include<stdio.h>
int fac(int,int *);
main()
{
	int n,g,i;
	printf("enter the number....");
	scanf("%d",&n);
	int f[n];
	printf("num=%d\n",n);
	fac(n,f);
	for(i=0;f[i]>=1;i++)
		printf("%d ",f[i]);

	printf("\n");
}

int fac(int n,int *p)
{
	int i;
	for (i=n/2;i>0;i--,*p++)
		if(n%i==0)
			*p=i;

}


