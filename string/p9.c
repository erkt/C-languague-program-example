/*9) Write a program to delete a desired character in a given string.
Ex:  Input : embedded
character: 'd'
Output : embee
 */
#include<stdio.h>
main()
{
	char s[100],c;
	int i,j;
	printf("enter the string....");
	scanf("%[^\n]",s);
	printf("enter the u wnat delete char...");
	scanf(" %c",&c);
	printf("string.....%s\n",s);
	printf("delete char...%c\n",c);
	for(i=0;s[i];i++)
	{
		if(s[i]==c)
		{
			for(j=i;s[j];j++)
				s[j]=s[j+1];
			i--;
		}
	}	printf("string.....%s\n",s);
}


