#include<stdio.h>
#include<math.h>
void atoffu(char *p)
{
	int i,j,k,l,temp,c=0;
	double g,s[]={0,0};
	for(i=0,l=0,k=0;p[i];i++)
	{	
		if(p[i]=='.'||p[i+1]=='\0')
		{	
			if(p[i+1]=='\0')
			i++;		
			for(j=l;j<i;j++)
			{	
				if(p[j]>='0'&&p[j]<='9')
					s[k]=s[k]*10+p[j]-48;
			}
			l=i+1;
			k++;
		}
	}
	temp=s[1];
	while(temp)
	{
		temp=temp/10;
		c++;
	}
	s[1]=s[1]/pow(10,c);
	printf("%lf",s[1]);
	g=s[0]+s[1];	
	printf("\n%lf ::%lf + %lf\n ",g,s[0],s[1]);
	printf("%lf\n",g);
}


main()
{
char c[1000];
double f;
printf("Enter only Float value::");
scanf("%s",c);
atoffu(c);
}

