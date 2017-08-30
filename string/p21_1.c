/*21) Write a program to read two strings through the keyboard like the following example 
  and replace any word of  the second string with the first string.
Ex: Input:-     Fist String      : “Tomorrow”
Second String : “Today  is  Sunday”
Replace word : “Today”.
Output:-  “Tomorrow is Sunday”          */
#include<stdio.h>
main()
{
	char ms[1000],rw[100],aw[100];
	int i,l,l1,l2,j,k;
	printf("Main string::");scanf("%[^\n]",ms);
	printf("Replace word::");scanf("%s",rw);
	printf("Add word::");scanf("%s",aw);
	for (i=0;ms[i];i++);l=i;
	for (i=0;rw[i];i++);l1=i;
	for (i=0;aw[i];i++);l2=i;
	for(i=0,k=0;ms[i];i++)
	{
		if(ms[i]==rw[0])
		{
			for(j=1;rw[j];j++)
			{
				if(ms[i+j]!=rw[j])
					break;
			}
		
			if(rw[j]=='\0')
			{
				if(l1>l2)
				{
					for(j=0;j<l1-l2;j++)
						for(k=i+l2;ms[k];k++)
							ms[k]=ms[k+1];
					for(k=0;aw[k];k++)
						ms[i++]=aw[k];
				}
				else if(l2>l1)
				{
					for(j=0;j<l2-l1;j++)
					{
						for(k=l;k>i+l1-1;k--)
							ms[k+1]=ms[k];
						l++;
					}
					for(k=0;aw[k];k++)
						ms[i++]=aw[k];
				}
				else if(l2==l1)
					for(k=0;aw[k];ms[i++]=aw[k++]);
			}	
		}
	}
	if(aw[k]!='\0')
	printf("String::%s is Not found in main string::%s..\n",rw,ms);
	else
	puts(ms);
}
