#include<stdio.h>
#include<stdarg.h>
void print(char *p,...)
{
	va_list v;
	int i,n;
	va_start(v,p);
	float f;
	char ch;
	for(i=0;p[i];i++)
		if(p[i]=='%')
		{
			i++;
			if(p[i]=='d')
			{
				n=va_arg(v,int);
				printf("%d",n);
			}
		 	else if(p[i]=='f')
			{
				f=va_arg(v,double);
				printf("%f",f);
			}
			else if(p[i]=='c')
			{
				ch=va_arg(v,int);
				printf("%c",ch);
			}
			printf("\n");
		}
}




			main()
			{
				int i=10;
				char c='k';
				float f=87.457;
				printf("i::%d    c::%c   f::%f \n ",i,c,f);
				print("i::%d    c::%c   f::%f \n ",i,c,f);
			}

