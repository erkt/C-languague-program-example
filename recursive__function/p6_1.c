/*6)Write a recursive function that displays a positive integer in words. For ex: if the
  integer is 3412 then it is displayed as three four one two.*/
#include<stdio.h>
void word(int m)
{
	int c;
	char s[10][10]={"zero","one","two","three","four","five","six","seven","eight","nine"};
	if(m>0)
	{
		c=m%10;
		m=m/10;
		word(m);
		printf("%s",s[c]);
	}
}
main()
{
	int m;
	printf("number::");
	scanf("%d",&m);
	word(m);
	printf("\n");
}

