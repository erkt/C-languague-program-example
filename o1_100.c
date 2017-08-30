//WAP TO PRINT INTEGER VALUE TO 1 TO 100 WITHOUT USING LOOPS....


#include<stdio.h>
void print(int);
main()
{       
        int i=1;
x:	if (i<=100)
{       
        printf("%d ",i++);
	goto x;
}
//	print(1);
}
/*
void print(int m)
{
	if(m<=100)
	{
		printf("%d\t ",m);
		print(++m);
	}
}*/
