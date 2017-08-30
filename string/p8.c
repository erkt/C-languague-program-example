/*8) Write a program to find the no.of words are presented in a given string line.
     Note: User has to input the string line at runtime.
*/
#include<stdio.h>
main()
{
	char a[100];
	int i,j,n;
	printf("enter the string....");
	scanf("%[^\n]",a);
	printf("%s\n",a);
	for(i=0,n=1;a[i];i++)
	{
		if(a[i]==' '||a[i+1]=='\0')
			if(a[i]==' '&&a[i+1]!=' ')
				n++;

	}

	printf("no of words...%d\n",n);

}

