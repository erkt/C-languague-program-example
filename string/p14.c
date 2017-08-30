/*14) Write a program to convert the characters Upper to Lower                                   and Lower to Upper in a given string.*/
#include<stdio.h>
main()
{
char s[100];
int i,j,k;
printf("enter the string....");
scanf("%[^\n]",s);
printf("string::%s\n",s);
i=0;
while(s[i])
{
	s[i]=s[i]^1<<5;
	i++;
}
printf("New string::%s\n",s);
}
