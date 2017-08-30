/*6)Write a recursive function that displays a positive integer in words. For ex: if the
  integer is 3412 then it is displayed as three four one two.*/
#include<stdio.h>
void word(int m)
{
	int c;
	if(m>0)
	{
		c=m%10;
		m=m/10;
		word(m);
		switch(c)
		{
			case 0:
				printf("zero ");
				break;
			case 1:
				printf("one ");
				break;
			case 2:
				printf("two ");
				break;
			case 3:
				printf("three ");
				break;
			case 4:
				printf("four ");
				break;
			case 5:
				printf("five ");
				break;
			case 6:
				printf("six ");
				break;
			case 7:
				printf("seven ");
				break;
			case 8:
				printf("eight ");
				break;
			case 9:
				printf("nine ");
				break;
			default:
				printf("over");
				break;
		}
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

