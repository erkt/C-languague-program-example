/*5) Write a program to compare two strings without using strcmp function.*/
#include<stdio.h>
main()
{
	char s[100],c[100];
	int i,j;
	printf("enter the 1st string....");
	scanf("%[^\n]",s);
	printf("enter the 2nd string....");
	scanf(" %[^\n]",c);
	for(i=0;s[i];i++)
		if(s[i]!=c[i])
			break;

	if(s[i]==c[i])
		printf("1st string  '%s' and 2nd string '%s' is equal",s,c);
	else if(s[i]>c[i])
		printf("1st string  '%s' is grether than 2nd string '%s'",s,c);
	else 
		printf("1st string  '%s' is less than 2nd string '%s'",s,c);

	printf("\n");
}

