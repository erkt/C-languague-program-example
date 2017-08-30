#include<stdio.h>
main()
{
	int n,i,c=0;
	printf("enter nu..");
	scanf("%d",&n);
	for (i=31;i>=0;i--)
	{
if((i+1)%4==0)printf(" ");
		if((i+1)%8==0)
		{
			printf("  ");
		}
		printf("%d",n>>i&1);
		if (n&1<<i)
		c++;
		
	}
	printf("\n%d ==C\n",c);






/*int a=1;
switch(a)
{
int b=20;
case 1:printf("b..%d\n",b);
break;
default:printf("b..%d\n",b);
break;
}*/
/*int x=7,y=0;
if(x=6)y=7;
else y=1;
char not;
not =!2;
printf("%d",y);
*/
/*int a=10,b=5,c=3,d=3;
if ((a>b)&&(c=d++))
printf("%d %d %d %d",a,b,c,d);
else
printf("%d %d  %d %d",a,b,c,d);
*/
/*
int x=3;
float y=3.1;

if(x==y)printf("%d=y %d =x \n",y,x);
else printf("%d=y %d =x \n",y,x);
*/
/*
int x=3;
if (x==2);
{x=0;
printf("%d\n ",x);}
if (x==3)
x++;
else x+=2;
printf("%d\n ",x);
*/

}
