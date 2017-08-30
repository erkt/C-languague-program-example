/////finding sizeof bitfields
#include<stdio.h>
struct k
{
	int i:7;
}aa;
main()
{
	static int count;
	aa.i=1;
	while(aa.i)
	{
		count++;
		aa.i=aa.i<<1;
	}
	printf("Sizeof bit fields is::%d\n",count);
}
