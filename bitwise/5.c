#include<stdio.h>
main()
{

	while(1)
	{
		int a,b,c;
		printf("press value=");
		scanf("\n%d%d%d",&a,&b,&c);
		printf("a=%d b=%d c=%d\n",a,b,c);
		a&a-1?printf("\na is not power of 2\n"):printf("\na is power of 2\n");
		b&b-1?printf("\nb is not power of 2\n"):printf("\nb is power of 2\n");
		int k=(c&c-1)==0?printf("\nc is  power of 2\n"):printf("\nc is not power of 2\n");
	}
}
