/*7)  Write a program to check the given strings are palindrom or not.
Note: Palindrome words are words which read and spell the same way both backwards  
and  forwards. Some examples,  
madam, level , radar, stats and etc. 
 */

#include<stdio.h>
main()
{
	char s[100],c[100],t;
	int i,j;
	printf("enter the string...");
	scanf("%[^\n]",c);
	printf("%s\n",c);
	////////////////////copy into other
	for(i=0;c[i];i++)
		s[i]=c[i];
	s[i]=c[i];
	printf("copy %s\n",s);
	//////////////////other swaping
	for(j=0;s[j];j++);
	for(i=0,j=j-1;i<j;i++,j--)
	{
		t=s[i];
		s[i]=s[j];
		s[j]=t;
	}
	printf("rev %s\n",s);
	///////////////compare two
	for(i=0;c[i];i++)
		if(c[i]!=s[i])
			break;
	if(c[i]==s[i])
		printf("string %s  is palindrom...",c);
	else
		printf("string %s  is  not palindrom...",c);
	printf("\n");
}

