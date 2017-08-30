#include<stdio.h>
int srcm(char *d,char *s)
{
	int i;
	for(i=0;s[i];i++)
		if(d[i]!=s[i])
			break;
	if(d[i]==s[i])
		return 0;
	else if(d[i]>s[i])
		return 1;
	else
		return -1;
}
void cp(char *d,char *s)
{
	int i;
	for(i=0;s[i];d[i]=s[i],i++);
	d[i]=s[i];
}
main()
{
	char s[5][20],t[20];
	int i,j,p;
	int r=sizeof(s)/sizeof(s[0]),c=sizeof(s[0])/sizeof(s[0][0]);
	for(i=0;i<r;i++)
	{
		printf("string[%d]::",i);
		scanf(" %[^\n]",s[i]);
	}
	for(i=0;i<r-1;i++)
	{
		for(j=0;j<r-1-i;j++)
		{
			p=srcm(s[j],s[j+1]);
			if(p>0)
			{
				cp(t,s[j]);
				cp(s[j],s[j+1]);
				cp(s[j+1],t);
			}
		}	
	}
	printf("\n ============================================================\n");
	for(i=0;i<5;printf("string[%d]::%s\n",i,s[i]),i++);
}


