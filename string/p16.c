/*16) Write a program to accept two strings from user into two character array and copy one 
       by one character into another destination array.
	Ex:  First String      : “abcdefg”
                   Second String : “1234”
	        then  Destination String  is  “a1b2c3d4efg”*/
#include<stdio.h>
main()
{
	char s[100],c[100],d[200];
	int i,j,k,n;
	printf("enter the 1st string...");
	scanf("%[^\n]",s);
	printf("enter the 2nd string...");
	scanf(" %[^\n]",c);
	for(i=0;s[i];i++);
	k=i;
	for(j=0;c[j];j++);
	n=j;
	if(k>n)
	{
		for(i=0,j=0;c[i];i++,j++)
		{
			d[j]=s[i];
			j++;
			d[j]=c[i];
		}
		for(;j<=k+n;d[j]=s[i],j++,i++);
	}
	else	
	{
		for(i=0,j=0;s[i];i++,j++)
		{
			d[j]=s[i];
			j++;
			d[j]=c[i];
		}
		for(;j<=k+n;d[j]=c[i],j++,i++);
	}
	printf("After string::%s\n",d);
}
