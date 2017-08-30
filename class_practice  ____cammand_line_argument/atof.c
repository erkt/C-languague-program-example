#include<stdio.h>
#include<math.h>
void atoffu(char *p)
{
	int i,j,k,l,temp,c=1;
	double s[]={0,0};
	for(i=0,l=0,k=0;p[i]!='.';i++)
		s[k]=s[k]*10+p[i]-48;
	for(j=i+1,k++;p[j];j++,c*=10)
		s[k]=s[k]*10+p[j]-48;
	
	printf("%lf",s[1]);
	s[1]=s[1]/c;
	printf("%lf",s[1]);
	printf("\n%lf ::%lf + %lf\n ",s[0]+s[1],s[0],s[1]);
}
main()
{
char c[1000];
double f;
printf("Enter only Float value::");
scanf("%s",c);
atoffu(c);
}

