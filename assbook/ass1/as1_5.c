//recatngle and circle radius length and breath enter find area and perimeter of both us......
#include<stdio.h>
main()
{
	double l,b,r,ra,rp,ca,cp;
	printf("enter the length....");
	scanf("%lf",&l);
	printf("enter the breath....");
	scanf("%lf",&b);
	printf("enter the radius....");
	scanf("%lf",&r);
	ra=l*b;        brp=(2*l)+(2*b);
	printf("\narea of rect....%lf    perimeter of rect.......%lf",ra,rp);
	ca=(4*3.14*r*r);    cp=(2*3.14*r);
	printf("\nperimeter of circle....%lf   area of circle.....%lf",cp,ca);
	printf("\n");
}
