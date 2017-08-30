//enter string
#include<stdio.h>
#include<stdlib.h>
main()
{
	int i,n,m;
	char **p;
	printf("enter the n::");
	scanf("%d",&n);
	printf("enter the size for each string::");
	scanf("%d",&m);
	p=malloc(sizeof(char*)*n);
//	printf("sizeof p::%d\n",sizeof(p));
	for(i=0;i<n;i++)
	{
		p[i]=malloc(sizeof(char) * m);
		printf("add:::::%u           sizeof p[%d]::%d\n",p[i],i,sizeof(p[i]));
	}
/*
	printf("enter the string..\n");
	for(i=0;i<n;i++)
		scanf("%s",p[i]);	
//	for(i=0;p[0][i];i++)
//		printf("%c",p[0][i]);
//	printf("\np=%u  p-1=%u  *(p-1)=%d\n",p[i],p[i-1],p[i-1][1]);
	printf("-----------------\n");
	for(i=0;i<n;i++)
		printf("data::%s\n",p[i]);
*/}




