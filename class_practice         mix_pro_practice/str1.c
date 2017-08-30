//////reverse of string
#include<stdio.h>
main()
{
	int  i,j,l,o;
	char c[10],k;
	printf("enter the string.......");
	scanf("%s",c);
	printf("\t%s\n",c);
	for(l=0;c[l];l++);
	printf("%d\n",l);
	for (i=0,j=l-1;i<j;i++,j--)
	{
		k=c[i];
		c[i]=c[j];
		c[j]=k;
	}
	printf("\t%s\n",c);
}
