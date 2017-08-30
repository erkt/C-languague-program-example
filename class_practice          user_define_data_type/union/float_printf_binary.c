//float value in printing form of binary
#include<stdio.h>
union binary
{
	int i;
	float f;
}k;
main()
{
	int i;
	printf("ENTER float::");
	scanf("%f",&k.f);
	for(i=31;i>=0;i--)
		printf("%d",k.i>>i&1);
	printf("\n");
}
