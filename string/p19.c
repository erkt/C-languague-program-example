/*19) Write a program to replace the words in reverse order in a given string line.
	Ex:  Input   :  “world changed your thoughts”
	       Output :  “thoughts your changed world”                    */
#include<stdio.h>
main()
{
	char s[100],t;
	int i,j,k,l,m;
	printf("enter the string....");
	scanf("%[^\n]",s);
	printf("%s\n",s);
for(l=0;s[l];l++);
for(i=0,l=l-1;i<l;i++,l--)
{t=s[l];
s[l]=s[i];
s[i]=t;
}
	for(i=0,k=0;s[i];i++)
	{
		if(s[i]==' '||s[i+1]=='\0')
		{
                        if(s[i+1]=='\0')
                            i++;
			for(j=i-1;j>k;j--,k++)
	   		{
		 		t=s[j];
	  			s[j]=s[k];
	  	 		s[k]=t;
	  		}
		k=i+1;
		}
	}
	printf("%s\n",s);   
}
