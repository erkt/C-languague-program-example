#include<stdio.h>
main()
{
	while(1)
	{
	 int a,b,c,d;
	printf("VALUE");
	printf("\npress value=");
	scanf("%d%d%d%d",&a,&b,&c,&d);
	printf("\na=%d b=%d c=%d d=%d \n",a,b,c,d);
	//b=a+b-(a=b);    // in one equation swaping

	/*a=a+b;    b=a-b;    a=a-b;*/    // addition subtraction through swaping

	/*a=a*b;    b=a/b;    a=a/b;*/    // division multiplication through swaping

	int k=a;a=b;b=k;      //using temp varible
	printf(" swaping done by temp\n");
	printf("\na value=%d",a);
	printf("\nb value=%d\n",b);
	c=c^d;d=c^d;c=c^d;  // using bitwise operator
	printf("SWAPING VALUE XOR");
	printf("\nc value=%d",c);
	printf("\nd value=%d\n",d);
	}	
}




