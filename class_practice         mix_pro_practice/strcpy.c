//////////string copy in other string

#include<stdio.h>
//char * my_strcpy(char *,char*);
char * my_strcpy(char *,char*,int);
main()
{
	char s[1000],d[1000],*ret;

	printf("Enter the string::");
	scanf("%[^\n]",s);

	printf("DATA::%s\n",s);
//	ret=my_strcpy(s,d);
	ret=my_strcpy(s,d,0);
	printf("copy::%s\n",ret);
}
//char *my_strcpy(char *source,char *dest)
char *my_strcpy(char *source,char *dest,int i)
{
	/*int i;
	for(i=0;source[i];i++)
	{
		dest[i]=source[i];
	}
	dest[i]='\0';
	return dest;*/
	if(source[i])
	{
		dest[i]=source[i];
		my_strcpy(source,dest,++i);
	}
	else
	{
		dest[i]=source[i];//'\0';
		return dest;
	}
}


