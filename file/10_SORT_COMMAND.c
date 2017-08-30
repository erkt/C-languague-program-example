//10) Write a Program to implement sort command.  (Check the command:  sort  filename.c )
#include<stdio.h>
#include<stdlib.h>
int strcm(char *,char*);
char **sort(char **,int);
main(int argc,char **argv)
{
	if(argc!=2)
	{
		printf("Usage:: ./a.out F_name.\n");
		return;
	}
	FILE *fp;
	char **p,ch,*temp;
	int line=0,max_char=0,c=0,i,j;
	fp=fopen(argv[1],"r");
	if(fp==0)
	{
		printf("%s is Not present..\n",argv[1]);
		return;
	}
	while((ch=fgetc(fp))!=EOF)
	{
		c++;
		if(ch=='\n')
		{
			line++;
			if(max_char<c)
				max_char=c;
			c=0;
		}
	}
	p=malloc(sizeof(int *)*line);
	for(c=0;c<line;p[c++]=malloc(max_char+1));
	rewind(fp);
	c=0;
	while((fgets(p[c++],max_char+1,fp))!=NULL);
//	for(i=0;i<line;printf("%s",p[i++]));	
	for(i=0;i<line;i++)
		for(j=0;j<line-1;j++)
		{
			if((c=strcm(p[j],p[j+1]))!=0)
			{
				temp=p[j];
				p[j]=p[j+1];
				p[j+1]=temp;
			}
		}
//	sort(p,line);
	for(i=0;i<line;printf("%s",p[i++]));	
}
int strcm(char *s,char *d)
{
	int i,j,k;
	for(i=0;s[i];i++)
	{
		for(j=0;d[j];j++)
				if(s[j]!=d[j])
		break;
		if(d[j]<s[j])
		return 1;
		else 
		return 0;
		
	}
} 
char ** sort(char**s,int line)
{
int i,j,k,l;
char *temp;
for(i=0;i<line;i++)
	for(j=i;j<line;j++)
	if((s[i][0]==(s[j][0]-32))||(s[i][0]==(s[j][0]-32)))
	{
		temp=s[j];
		for(k=j;k>i+1;k--)
		{
			s[k]=s[k-1];
		}
		s[i+1]=temp;
	}
}
