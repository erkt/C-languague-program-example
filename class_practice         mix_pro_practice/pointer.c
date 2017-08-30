////binary formate of float number uing char pointer

#include<stdio.h>
main()
{
	int i,j;
	float f;
	char *p;
	printf("enter the float value...");
	scanf("%f",&f);
	p=(char *)&f;
	p=p+sizeof(f)-1;
	for(i=0;i<sizeof(f);i++,p--)
	{
		for(j=7;j>=0;j--)
		{
			printf("%d",*p>>j&1);
		}
		printf(" ");
	}
	printf("\n");
}
