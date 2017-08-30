#include<stdio.h>
main()
{
	char s[10],ch;
	int i,j;
	printf("enter the string...");
	scanf("%s",s);
	printf("enter u wnat delete character...");
	scanf(" %c",&ch);
	printf("%s the string...\n",s);
	printf("%c character...\n",ch);
	for(i=0;s[i];i++)
	{
		if(ch==s[i])
		{
			for(j=i;s[j];j++)
				s[j]=s[j+1];
			i--;
		}

	}
	printf("\n%s\n",s);
}

