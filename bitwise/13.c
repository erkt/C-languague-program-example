/*13. Write a program to delete no.of  bits from particular position in a given number.
       Input the no.of bits, at runtime.
        Ex:  Suppose  num  =  100;
		         It's Binaray is     00000000000000000000000001100100
		         delete 2 bits from 4th position
		         then result   is     00000000000000000000000000011100*/ 
#include<stdio.h>
main()
{
	unsigned int n,q,e;
	int i,p,m;
	printf("DATA::");
	scanf("%d",&n);
	printf("Position::");
	scanf("%d",&p);
	printf("NO of bits::");
	scanf("%d",&m);
	q=e=n;	
	for(i=31;i>=0;i--)
		printf("%d",n>>i&1);//00000000 00000000 00000000 01100100
	printf("\n--------------------------------------\n");
	n=n<<(31-(p-m));
	for(i=31;i>=0;i--)
		printf("%d",n>>i&1);//10000000 00000000 00000000 00000000
	printf("\n--------------------------------------\n");
	n=n>>(31-(p-m));
	for(i=31;i>=0;i--)
		printf("%d",n>>i&1);//00000000 00000000 00000000 00000100
	printf("\n--------------------------------------\n");
	q=q>>p+1;
	for(i=31;i>=0;i--)
		printf("%d",q>>i&1);//00000000 00000000 00000000 00000011
	printf("\n--------------------------------------\n");
	q=q<<(p-m+1);
	for(i=31;i>=0;i--)
		printf("%d",q>>i&1);//00000000 00000000 00000000 00011000
	printf("\n--------------------------------------\n");
	e=n|q;
	for(i=31;i>=0;i--)
		printf("%d",e>>i&1);//00000000 00000000 00000000 00011100
	printf("\n--------------------------------------\n");
}









