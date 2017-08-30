#include<stdio.h>
main()
{
	char s[10],s1[10];
	int i,j;
	printf("enter the string...");
	scanf("%s",s);
	printf("enter the string...");
	scanf("%s",s1);
	printf("%s the first string...\n",s);
	printf("%s the second string...\n",s1);
	for(i=0;s[i];i++);

	for(j=0;s1[j];j++)
		if(s[j]!=s1[j])
			break;



	if(s[j]==s1[j])
		printf("%s and %s are equal.....\n",s,s1);
	else
		printf("%s and %s are not equal.....\n",s,s1);
}

