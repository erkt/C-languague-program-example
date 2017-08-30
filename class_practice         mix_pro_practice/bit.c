#include<stdio.h>
main()
{

	int r,n,p,c;
	printf("enter value....");
	scanf("%d",&n);
	printf("enter position of bit check 0 or 1....");
	scanf("%d",&p);
	printf("enter position of bit set...");
	scanf("%d",&c);

	printf("\nvalue===%d",n);
	printf("\nposition....%d",p);
	//check
	r=n&1<<p?printf("\n left shifting.....bit is one......."):printf("\n left shifting....bit is 0.....");
	r=n>>p&1?printf("\nright shifting.....bit is one......."):printf("\nright shifting... bit is 0.....");

	//set
	printf("\n\n\n\nbefore set n=%d",n);
	r=n>>c&1?printf("\n %dth bit is one.......",c):printf("\n%dth bit is 0....",c);
	n=n|1<<c;
	printf("\nafter set n=%d",n);
	printf("\n after set");
	r=n>>c&1?printf("\n%dth bit is one.......\n",c):printf("\n%dth bit is 0....\n",c);

}
