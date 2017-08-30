//10) Write a Program to implement sort command.  (Check the command:  sort  filename.c )
#include<stdio.h>
#include<stdlib.h>
void sort(char**,int);
int strcm(char*, char*);
main(int argc,char**argv)
{
	if(argc!=2)
	{
		printf("Usage:: ./a.out F_name\n");
		return;
	}
	FILE *f;
	char ch,**p,*temp;
	int i=0,j,k,line=0,max=0,t;
	f=fopen(argv[1],"r");
	if(f==0)
	{
		printf("%s file is not present.\n",argv[1]);
		return;
	}
	while((ch=fgetc(f))!=EOF)
	{
		i++;
		if(ch=='\n')
		{
			line++;
			if(max<i)
				max=i;
			i=0;
		}
	}
	p=malloc(sizeof(int *)*line);
	for(i=0;i<line;i++)
		p[i]=malloc(max+1);
	rewind(f);
	i=0;
	while(fgets(p[i++],max+1,f));
	printf("-------UN-SORTED DATA---------\n");
	i=0;
	while(printf("%s",p[i++]),i<line);
	for(i=0;i<line;i++)
		for(j=0;j<line-1;j++)	
		{
			if((t=strcm(p[j],p[j+1]))!=0)
			{
				temp=p[j];
				p[j]=p[j+1];
				p[j+1]=temp;
			}
		}
	sort (p,line);
	printf("--------SORTED DATA---------\n");
	i=0;
	while(printf("%s",p[i++]),i<line);
}
int strcm(char *s,char*d)
{
	int i,j,k;
	for(i=0;s[i];i++)
	{
		if(s[0]>d[0])
			return 1;
		else if(s[0]==d[0])
		{
			for(j=0;d[j];j++)
				if(s[i++]!=d[j])
					break;
			if(s[i]>d[j])
				return 1;
			else
				return 0;
		}
	}
}
void sort(char**d,int line)
{
	int i,j,k,l;
	char *temp;
	for(i=0;i<line;i++)
	{
		if((d[i][0]>='a'&&d[i][0]<='z')||(d[i][0]>='A'&&d[i][0]<='Z'))
		{
			for(j=i;j<line;j++)
			{
				if(((d[i][0])==(d[j][0]-32))||((d[i][0])==(d[j][0]+32)))
				{	
					temp=d[j];
					for(k=j;k>i+1;k--)
					{
						d[k]=d[k-1];
					}
					d[i+1]=temp;
				}		
			}			
		}
	}
}




















