/*6) Write a program to reverse the string using loops & using recursion.
*/
#include<stdio.h>
main()
{
char s[100],c;
int i,j;
printf("enter the string......");
scanf("%[^\n]",s);
printf("before ....%s\n",s);

for(j=0;s[j];j++);
for(i=0,j=j-1;i<j;i++,j--)
{
c=s[i];
s[i]=s[j];
s[j]=c;
}

printf("After ......%s\n",s);
}
