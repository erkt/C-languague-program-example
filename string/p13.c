/*13) Write a program to find count of  Lower characters, Upper characters, Special characters
      and digits occured in a given string.*/

#include<stdio.h>
main()
{
	char c[100];
	int i,j,k,l,u,s,d;
	printf("enter the string...");
	scanf("%[^\n]",c);
	i=0;l=0;u=0;s=0;d=0;k=0;
		while(c[i])
		{
			if(c[i]>='a'&&c[i]<='z')
				l++;
			else if(c[i]>='A'&&c[i]<='Z')
				u++;		
			else if(c[i]>='0'&&c[i]<='9')
				d++;
			else if(c[i]==' ')
				k++;
			else
				s++;
			i++;
		}
	printf("string::%s \n\t lower character::%d \t upper character::%d \t special character::%d \t digit::%d \t space::%d\n",c,l,u,s,d,k);
}	
