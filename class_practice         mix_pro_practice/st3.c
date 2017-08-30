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

	for(j=0;s1[j];j++,i++)
		s[i]=s1[j];
	s[i]=s1[j];
	printf("%s the first string...\n",s);
	printf("%s the second string...\n",s1);
}

