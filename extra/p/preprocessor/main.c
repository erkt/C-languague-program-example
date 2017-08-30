#include<stdio.h>
#include<stdlib.h>
#include<string.h>
static char *data[]={"include","define","undef","if","ifdef","elif","endif","else","ifndef","pragma"};
char p_path[20]="/usr/include/",d_path[100],path[100];
int srcm(char *p,int s_data);
void rm_cmt(char *filename);
main(int argc,char**argv)
{
	if(argc!=2)
	{
		printf("Usage:: ./pre F_name.c\n");
		return;
	}
	FILE *sf,*i_fp,*t_fp;
	int i,j,l,k,a,length,s_data,select_process,line=0,l_path;
	char filename[100],**p,temp;
	s_data=sizeof(data)/sizeof(char *);//database size for s_data
	//	printf("%d\n",s_data);
	for(l_path=0;path[l_path];l_path++);
	//	printf("%d\n",l_path);
	for(i=0;argv[1][i];i++)
	{	
		if(argv[1][i]!='.')	
			filename[i]=argv[1][i];
		else
		{
			filename[i++]='.';
			filename[i++]='i';	
			filename[i++]='\0';	
			break;
		}
	}
	//	printf("%s\n",filename);
	sf=fopen(argv[1],"r");
	if(sf==0)
	{
		printf("%s File is not present..\n",argv[1]);
		return;
	}
	i=0;
	while((temp=fgetc(sf))!=EOF)
	{
		i++;
		if(temp=='\n')
		{
			line++;
			if(i>length)
				length=i;
			i=0;
		}
	}
	rewind(sf);
	p=malloc(sizeof(char *)*line);
	for(i=0;i<line;i++)
		p[i]=malloc(length+1);
	i=0;
	i_fp=fopen(filename,"w");
	while((fgets(p[i],length+1,sf))!=NULL)//file store in buffer
	{
		select_process=srcm(p[i],s_data);	
		//		printf("i::%d \n",i);
		switch(select_process)
		{
			default:
				fputs(p[i],i_fp);
				break;
			case 0:
				for(j=0;p[i][j];j++)
				{
					if(p[i][j]=='<')
					{
						if(p[i][j+1]==' ')
						{
							printf("Fatel Error!!!!!\n compilation terminated..\n");
							remove(filename);
							return;
						}
						for(k=j+1,l=0;p[i][k]!='>';k++);
						for(j++;j<k;j++)
							d_path[l++]=p[i][j];
						printf("%s:::::::::%d\n",d_path,i);	
						for(a=0;p_path[a];path[a]=p_path[a++]);path[a]='\0';
						strcat(path,d_path);
						t_fp=fopen(path,"r");
						if(t_fp==0)
						{
							printf("Fatel Error!!!!!\n compilation terminated..\n");
							remove(filename);
							return;
						}
						else
						{
							while((temp=fgetc(t_fp))!=EOF)
							{
								fputc(temp,i_fp);
							}
							fclose(t_fp);
						}
					}
					else if(p[i][j]=='"')
					{
						if(p[i][j+1]==' ')
						{
							printf("Fatel Error!!!!!\n compilation terminated..\n");
							remove(filename);
							return;
						}
						for(k=j+1,l=0;p[i][k]!='"';k++);
						for(j++;j<k;j++)
							d_path[l++]=p[i][j];
						printf("%s:::::::::%d\n",d_path,i);	
						t_fp=fopen(d_path,"r");///PWD path
						if(t_fp==0)
						{
							printf("PWD not present...\n");

							for(a=0;p_path[a];path[a]=p_path[a++]);path[a]='\0';
							strcat(path,d_path);////predefine path
							t_fp=fopen(path,"r");
							if(t_fp==0)
							{
								printf("Fatel Error!!!!!\n compilation terminated..\n");
								remove(filename);
								return;
							}
							else
							{
								while((temp=fgetc(t_fp))!=EOF)
								{
									fputc(temp,i_fp);
								}
								fclose(t_fp);
							}


						}
						else
						{
							while((temp=fgetc(t_fp))!=EOF)
							{
								fputc(temp,i_fp);
							}
							fclose(t_fp);
						}
					}
				}
				break;
			case 1:
				
				break;
		}	
		i++;
	}
/////remove comments
	fclose(i_fp);
	rm_cmt(filename);
}
void rm_cmt(char *filename)
{
	FILE *p;
	int i,j,k,c=0;
	char *q,temp,t1;
	p=fopen(filename,"r");
	if(p==0)
	{	
		printf("file missing.\n");
		return;
	}
	else
	{		
		fseek(p,0,SEEK_END);
		k=ftell(p);
		rewind(p);
		q=malloc(sizeof(char)*(k+1));
		i=0;
		while((temp=fgetc(p))!=EOF)
		{
			if(temp=='/'&&(t1=fgetc(p)=='/'))
			{
				char t;
				while((t=fgetc(p))!='\n');
				continue;
			}			
			else if(temp=='/'&&(t1=fgetc(p)=='*'))
			{
				char t,t1;
				while(((t=fgetc(p))!='*')&&((t1=fgetc(p))!='/'));
				continue;
			}
			q[i++]=temp;
		}
	}
	printf("%s",q);
}
int srcm(char *p,int s_data)
{
	static int i,j,k,l;
	for(i=0;p[i];i++)
	{
		if(p[i]=='#')
		{
			for(j=0;j<s_data;j++)
			{
				for(l=i+1;p[l];l++)
				{
					if(p[l]==' ')
						continue;
					else if((p[l]=='/')&&(p[l+1]=='*'))
					{    
						int j=1;
						while (j)
						{
							if((p[l]=='*')&&(p[l+1]=='/'))
							j=0;
							l++;
						}
					}
					else
						break;
				}
				for(k=0,l;data[j][k];k++)
					if(p[l++]!=data[j][k])
						break;
				if(data[j][k]=='\0')
				{
					if(data[j][k-1]==p[l-1])
						return j;
					else
						return  1111;
				}
			}
		}
	}
	return 1111;	
}
