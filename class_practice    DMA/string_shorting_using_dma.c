#include<stdio.h>
#include<stdlib.h>
main()
{
	int i,n,j;
	char **p,*p1;
	printf("enter the n\n");
	scanf("%d",&n);
	p=malloc(sizeof(char*)*n);
	for(i=0;i<n;i++)
		p[i]=malloc(20);
	printf("enter the string..\n");
	for(i=0;i<n;i++)
		scanf("%s",p[i]);
	printf("-----------------\n");
	for(i=0;i<n;i++)
		printf("data::%s\n",p[i]);
	printf("-----------------\n");

	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-1-i;j++)
			if(strcmp(p[j],p[j+1])==1)
			{	
				p1=p[j];
				p[j]=p[j+1];
				p[j+1]=p1;
			}
	}
	for(i=0;i<n;i++)
		printf("data::%s\n",p[i]);
	printf("-----------------\n");


}




