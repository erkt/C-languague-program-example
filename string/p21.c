/*21) Write a program to read two strings through the keyboard like the following example 
  and replace any word of  the second string with the first string.
Ex: Input:-     Fist String      : “Tomorrow”
Second String : “Today  is  Sunday”
Replace word : “Today”.

Output:-  “Tomorrow is Sunday”          */
#include<stdio.h>
main()
{
	char s[100],c[100],s1[100];
	int i,j,k,l[3],a,w;
	printf("word::"); scanf("%[^\n]",s);
	printf("main STRING::"); scanf(" %[^\n]",c);
	printf("replace word::"); scanf(" %[^\n]",s1);
	for(i=0;s[i];i++); l[0]=i;//word length     tomorrow
	for(i=0;s1[i];i++); l[1]=i;//replace word length     today
	for(i=0;c[i];i++); l[2]=i;//main string length      today is sunday     op::tomorrow is sunday
	for(i=0;c[i];i++)
	{
		if(c[i]==s1[0])
		{
			k=i;
			for(j=0;s1[j];j++,i++)	
			{
				if(s1[j]!=c[i])
					break;
			}
		if(s1[j]=='\0')
		{
			if(l[0]>l[1])
			{
				for(j=0;j<l[0]-l[1];j++)
				{	
					for(a=l[2];a>i;c[a+1]=c[a],a--);
					l[2]=l[2]+1;
				}	
				for(j=k;j<i+(l[0]-l[1]);c[j]='X',j++);

				for(j=k,w=0;j<i+(l[0]-l[1]);c[j]=s[w],j++,w++);
			}
			else
			{
			
				for(j=0;j<(l[1]-l[0]);j++)
					for(a=i-(l[1]-l[0]);c[a];c[a]=c[a+1],a++);
			printf("O::%s\n",c);
				for(j=k,w=0;s[w];c[j]=s[w],j++,w++);
			printf("O::%s\n",c);
			}
			printf("OUTPUT::%s\n",c);
			break;
		}
	}}
}
