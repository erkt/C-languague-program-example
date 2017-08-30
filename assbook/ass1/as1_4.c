//ass book as1(basic) no.4
#include<stdio.h>
main()
{
int i=0;
double z,a[i],t,p,x;
printf("enter max marks for subject=");
scanf("%lf",&z);
x=z*5;
printf("enter a sub mark=");
scanf("%lf",&a[i]);
i++;
printf("enter b sub mark=");
scanf("%lf",&a[i]);
i++;
printf("enter c sub mark=");
scanf("%lf",&a[i]);
i++;
printf("enter d sub mark=");
scanf("%lf",&a[i]);
i++;
printf("enter e sub mark=");
scanf("%lf",&a[i]);
i++;
t=a[0]+a[1]+a[2]+a[3]+a[4];
printf("total=%lf\n",t);
p=t/x;
p=p*100;
printf("p=%lf\n",p);
}
