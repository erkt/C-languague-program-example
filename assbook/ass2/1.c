#include<stdio.h>
main()
{
/*	int  i=2,j=3,k,l;
	float a,b;
	k=i/j*j;
	l=j/i*i;
	a=i/j*j;
	b=j/i*l;
	printf("%d %d %f %f",k,l,a,b);
*/
/*	int x=3 ,y=5,z;
	z=x&&y;
	printf("\nZ=%d",z);
	z=x&y;
	printf("\nZ=%d",z);
*/
/*	int x=7,y=10,a,b;
	a=x||y;
	printf("a=%d",a);
	b=x|y;
	printf("b=%d",b);
*/

/*	int x=2,y=6,z=6;
	x=y==z;
	printf("%d",x);
*/
/*	int x=4,y,z;
	y=--x;
	z=x--;
	printf("%d%d%d",x,y,z);
*/
/*	int x=5;
	printf("%d%d%d",x,x<<2,x>>2);
*/
//printf("%d %d %d",sizeof('a'),sizeof("4"),sizeof(4) );
	int x=20,y=35;
	x=y++ + x++;
	y=++y + ++x;
printf("%d %d ",x,y);
}
