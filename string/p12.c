/*12) Write a program to print the count of duplicate characters in a given string.
       Ex:  Input : “hrithik roshan”
              Output:  Letter   -------  Count
                               h        -------      3
		      r        -------      2
                                i        -------      2
*/
#include<stdio.h>
main()
{
	char s[100],c[100],k,a[100];
	int i,j,n,m,g,n1[100];
	printf("enter the string....");
	scanf("%[^\n]",s);
	printf("after....%s\n",s);
	for(i=0;s[i];c[i]=s[i],i++);
	c[i]=s[i];
	for(i=0,g=0,a[g]=0;c[i];i++)
	{
		for(j=i,n=0;c[j];j++)
		{
			for(m=0;m<g;m++)
			if(c[i]==a[m])
			{
			i++;			
			break;
			}	
			if(c[i]==c[j])	
				n++;
		}
		if(n>1)
		{
			a[g]=c[i];
			n1[g]=n;
			g++;
		}
	}
	printf("%s\n",c);
	for(i=0;i<g;i++)
		printf("letter....%c\tduplicate.....%d\n",a[i],n1[i]);
}

