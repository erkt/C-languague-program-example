/* 7 write a c programm to insert an element at desired position in an array....*/
#include<stdio.h>
main()
{
	char c,ch[1000],k;
	int i,j,l,n;
	printf("enter the string...");
	scanf("%[^\n]",ch);
	printf("character");
	scanf(" %c",&c);
	printf("position...");
	scanf(" %d",&n);

	for(i=0;ch[i];i++);
	l=i+1;
	for(i=0;i<=l;i++)
	{
		if(i==n-1)
		{
			for(j=l;j>i;j--)
				ch[j]=ch[j-1];
			ch[i]=c;
		}
	}
	printf("%s\n",ch);
}
