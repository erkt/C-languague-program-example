#include<stdio.h>
main()
{
	int i;
	char a[10],b[10];
	printf("enter the string...");
	scanf("%s",a);
	printf("%s\n",a);
	for(i=0;a[i];i++)
		printf("%c ",a[i]);
	printf("\n");
	for(i=0;a[i];i++)
		b[i]=a[i];
	b[i]=a[i];
	for(i=0;b[i];i++)
		printf("%c ",b[i]);
	printf("\n");
	for(i=0;a[i];i++)
		if(a[i]>='a' && a[i]<='z')
			a[i]=a[i]-32;
	for(i=0;a[i];i++)
		printf("%c ",a[i]);
	printf("\n");
}

