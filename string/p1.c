/*1) program to find  string length using pointer.*/

#include<stdio.h>
main()
{
	char a[1000],*p;
	printf("enter the string....");
	scanf("%[^\n]",a);
	printf("%s\n",a);
	p=a;
	for(;*p;p++);
	printf("string length...%d\n",p-a);
}
