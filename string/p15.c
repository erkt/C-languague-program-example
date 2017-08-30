//15) Write a program to sort a given string in ascending order.

#include<stdio.h>
main()
{
	int i,j,l;
	char c[10],k;
	printf("enter the strig....");
	scanf("%s",c);
	printf("%s\n",c);
	for(l=0;c[l];l++);///////count the length of string.....
	for(i=0;i<l;i++)
	{
		for(j=0;j<l-1;j++)
			if(c[j]>c[j+1])
			{
				k=c[j];
				c[j]=c[j+1];
				c[j+1]=k;
			}
	}
	printf("%s\n",c);
}
