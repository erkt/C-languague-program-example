#include<stdio.h>
main(int a,char **v)
{
	int n,n1;
	if(a!=4)
	{
		printf("Usage::value operatio value\n");
		return;
	}
	n=atoi(v[1]);
	n1=atoi(v[3]);
	switch(v[2][0])
	{
		case '+':
			printf("%d =%d + %d ",n+n1,n,n1);
			break;
		case '-':
			printf("%d =%d - %d ",n-n1,n,n1);
			break;
		case '*':
			printf("%d =%d * %d ",n*n1,n,n1);
			break;
		case '/':
			printf("%d =%d / %d ",n/n1,n,n1);
			break;
		default:
			printf("proper operation\n");
			break;
	}
	printf("\n");
}
