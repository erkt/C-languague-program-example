/*11) Write a program to delete the duplicate characters in a given string.
      Ex: Input : vecteeovvorr
             Output : vector
*/
#include<stdio.h>
main()
{
char s[100],c;
int i,j,k;
printf("enter the string.....");
scanf("%[^\n]",s);
printf("before......%s\n",s);
for(i=0;s[i];i++)
{
	c=s[i];
	for(j=i+1;s[j];j++)
		{
			if(c==s[j])
			{
				for(k=j;s[k];k++)
				s[k]=s[k+1];
				j--;
			}
		}
}
printf("after......%s\n",s);
}
