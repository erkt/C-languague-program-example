// swap nibble

#include<stdio.h>
main()
{
short	int a,i,j,k,l;
	printf("enter the number....");
	scanf("%x",&a);
	printf("a=%x\n",a);
	i=a<<8;
	printf("i=%x\n",i);
	j=a>>8;
	printf("j=%x\n",j);
	a=i|j;
	printf("a=%x\n",a);

	i=a<<8|a>>8;
	printf("i=%x\n",i);


}
