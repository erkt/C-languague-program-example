/////armstrong number.....371=3^3+7^3+1^3

#include<stdio.h>
main()
{
	int a,b,c,d;
	printf("\n\tenter the number....");
	scanf("%d",&c);
	for (a=c,d=0;a>9;)
	{
		b=a%10;
		d=(b*b*b)+d;
		a=a/10;
	}
	d=(a*a*a)+d;
	printf("d==%d",d);
	if(c==d)
		printf("\t%d is a armstrong number..\n\n",c);
	else
		printf("\t%d is not a armstrong number.. \n\n",c);
}
