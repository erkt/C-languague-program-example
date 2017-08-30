/*17) Write a program to find the no.of times substring is found in a given string.*/
#include<stdio.h>
main()
{
	char s[100],c[50];
	int i,j,k;
	printf("enter the string ::");
	scanf("%[^\n]",s);
	printf("enter the substring::");
	scanf(" %[^\n]",c);
	for(i=0,k=0;s[i];i++)
	{
		if(s[i]==c[0])
		{
			for(j=0;c[j];j++,i++)
				if(s[i]!=c[j])
				    break;
			if(c[j]=='\0')
				k++;
			i--;
		}
	}
	printf("no substring:::%d\n",k);
}


