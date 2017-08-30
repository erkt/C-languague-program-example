/*4) program to find vowels in a given  string.*/
#include<stdio.h>
main()
{
char s[100],c[]={'a','e','o','i','u','A','E','I','O','U'};
int n,j,i;
printf("enter the string....");
scanf("%[^\n]",s);
printf("%s",s);

for(i=0,n=0;s[i];i++)
for(j=0;j<sizeof(c)/sizeof(c[0]);j++)
	if(s[i]==c[j])
	n++;

printf(" \nstring %s  in\t\t vowels is %d......\n",s,n);	
}
