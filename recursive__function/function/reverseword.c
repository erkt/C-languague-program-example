/*18) Write a program to reverse the words in a given string line.
Ex : “I am a good boy”
“I ma a doog yob”
 */

#include<stdio.h>
main()
{
	char s[100],t;
	int i,j,k,l,m;
	printf("enter the string....");
	scanf("%[^\n]",s);
	printf("%s\n",s);
	
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
