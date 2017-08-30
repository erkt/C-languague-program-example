#include<stdio.h>
#include<stdlib.h>
#include<string.h>
static char *data[]={"include","define","undef","if","ifdef","elif","endif","else","ifndef","pragma"};
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
