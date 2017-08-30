/*3)write aprogram to find the no.of times the character is found in a given string.*/
#include<stdio.h>
main()
{
char s[100];
int n,i;
printf("enter the string....." );
scanf("%[^\n]",s);
printf("string......%s\n",s);
for(i=0,n=0;s[i];i++)
{
	if(s[i]>='a'&&s[i]<='z')
	n++;
	else if(s[i]>='A'&&s[i]<='Z')
	n++;
	else
	n;
}
printf("no of times character....%d\n",n);
}

