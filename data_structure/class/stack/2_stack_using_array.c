//13) Write a C program to implement the stack using arrays.
#include<stdio.h>
#include<stdlib.h>
int sp=-1;
int n[5];
void push1(int num)
{
	n[++sp]=num;

}
void pop1(void)
{
	printf("%d ",n[sp]);
	sp--;
}

main()
{
	int num,i,m;
	while(1)
	{
		printf("\nchoose option for stack::\n  1)Push operation..\n  2)Pop operation..\n  3)printing...\n  4)exit\n");
		scanf("%d",&m);
		switch(m)
		{
			case 1:
				if(sp==4)
				{
					printf("Stack overflow\n");
				}
				else
				{
					printf("enter tyhe data\n");
				//	scanf("%d",&num);
					push1(scanf("%d",&num));
				}
				break;
			case 2:
				if(sp<=-1)
				{
					printf("Stack underflow\n");
				}
				else
					pop1();
				break;
			case 3:
				if(sp<=-1)
					printf("Stack is Blank...\n");
				else
				{

					for(i=0;i<=sp;i++)
						printf("%d ",n[i]);
					printf("\n");
				}
				break;
			case 4:exit(0);
			default:
			       printf("Invalid\n");
		}
	}
}
