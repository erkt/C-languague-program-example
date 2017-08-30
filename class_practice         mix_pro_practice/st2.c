#include<stdio.h>
main()
{
	char s[10],ch,ch1;
	int i,j;
	printf("enter the string...");
	scanf("%s",s);
	printf("enter u wnat delete character...");
	scanf(" %c",&ch);
	printf("enter u wnat replace character...");
	scanf(" %c",&ch1);
	printf("%c character...\n",ch);
	printf("%c character...\n",ch1);
	printf("%s the string...\n",s);
	for(i=0;s[i];i++)
	{
		if(ch==s[i])
			s[i]=ch1;
	}
	printf("\n%s\n",s);
}

