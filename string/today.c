#include<stdio.h>
#include<stdlib.h>
#include<string.h>
main()
{
	char a[100],b[100],c[100];
	int i,j,k,l,m,x,y,z,u,v;
	printf("Enter the string A:\n");
	//	scanf("%s[^\n]",a);
	gets(a);
	printf("Which string you are going to re																								place string b:\n");
	//scanf(" %[^\n]",b);
	gets(b);
	printf("Which  string you wants to put:\n");
	//	scanf(" %[^\n]",c);
	gets(c);
	printf("strings are:\n");
	x=strlen(a);
	y=strlen(b);
	z=strlen(c);
	printf(" a=%s=%d\n  b=%s=%d\n c=%s=%d\n",a,x,b,y,c,z);
	for(i=0;a[i];i++)
	{
		if(a[i]==b[0])
		{
			for(j=1;b[j];j++)
			{
				if(b[j]!=a[i+j])
					break;
			}
			if(b[j]=='\0')
			{
				if(y>z)     // 1st word is bigger than 2nd
				{
					m=y-z;     // finding how many char left
					for(	;m	;m--)
					{
						for(l=i+j-1;a[l];l++)
							a[l]=a[l+1];		
						j--;
                                                 x--;
					}
					for(k=0;c[k];k++,i++)
						a[i]=c[k];	
				}	
				if(y<z)
				{
					v=z-y;
					for(	;v	;v--	)	
					{	
						for(u=x+1;u>=i+j;u--)
							a[u]=a[u-1];
						x++;
					}
					for(k=0;c[k];k++,i++)
						a[i]=c[k];	
				}
                               if(y==z)
					{
						for(k=0;c[k];k++,i++)	  
						a[i]=c[k];
					}	
			}	
		}
	}
	printf(" a=%s\n",a);
}
