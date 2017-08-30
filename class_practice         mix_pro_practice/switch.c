////calculator


#include<stdio.h>
main()
{
	char c;
	double i,j,k,l=0,m,n;
	printf("enter 1st the number.....");
	scanf("%lf",&n);
	printf("enter 2nd the number.....");
	scanf("%lf",&m);
x:
	printf("\n\tchoose the option..\n\t '+' for addition.\n\t '-' for subtraction.\n\t '*'  for multiplication.\n\t '/' for division.\n\t '%%' for modulo");
	printf("\n================================\n");
	scanf(" %c",&c);
	switch(c)
	{
		default:
			if(l<3)
			{
				printf("plz select the proper input...\n");
				l++;
				goto x;	
				break;
			}
			else
				break;
		case '+':
			printf("\t%lf + %lf = %lf\n",n,m,n+m);
			break;
		case '-':
			printf("\t%lf - %lf = %lf\n",n,m,n-m);
			break;
		case '*':
			printf("\t%lf * %lf = %lf\n",n,m,n*m);
			break;
		case '/':
			printf("\t%lf / %lf = %lf\n",n,m,n/m);
			break;
		case '%':
			printf("\t%lf %%  %lf= %d\n",n,m,(int)n%(int)m);
			break;
	}
	printf("\n================================\n");
}



