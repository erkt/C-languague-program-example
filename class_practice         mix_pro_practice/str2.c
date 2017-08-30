//////how many char in a string
#include<stdio.h>
main()
{
	int  i,j,l,o;
	char c[10],k;
	printf("enter the string.......");
	scanf("%s",c);
	printf("enter the character you want find repeated character.......");
	scanf(" %c",&k);
	
	printf("\t%c\n",k);
	printf("\tstring......'%s'..\n",c);
	
	for (i=l=0;c[i];i++)
	if(k==c[i])
	l++;
	
	printf("\t this string ''%s''  repeated character ''%c'' is  ''%d'' times\n",c,k,l);
}
