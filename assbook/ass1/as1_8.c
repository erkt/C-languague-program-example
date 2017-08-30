//ass book as1(basic) no.8 
#include<stdio.h>
main()
{

double x,y,a,b,c;
printf("value=\n");
scanf("%lf%lf",&x,&y);
printf("\nx=%lf y=%lf\n",x,y);
a=(((3*(x+y))/(9*x+2*y))-((x-y)/(2*x+3*y)));
printf("\na=%lf",a);
b=((2*x-y)/((3*x+y)*(x-2)*(y+3)));
printf("\nb=%lf",b);
c=(((3*x+4*y)*(2*x-3))/((x-y)*(x+y)*(2*x+3)));
printf("\nc=%lf\n",c);
}
