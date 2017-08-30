#include<stdio.h>
union o
{
	int i;
	char c;
}k;
main()
{
	k.i=99;
	if (k.i==k.c)
		printf("Little enddian\n");
	else
		printf("Big enddian\n");
}

