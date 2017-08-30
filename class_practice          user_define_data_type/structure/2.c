#include<stdio.h>
struct st
{
	int r;
	char n[20];
	float f;
};

typedef struct st ST;
main()
{
	ST n[5];
	int i;
	for(i=0;i<5;i++)
	{
		printf("Roll number::");
		scanf("%d",&n[i].r);
		printf("Name::");
		scanf("%s",n[i].n);
		printf("Marks::");
		scanf("%f",&n[i].f);
	}
	for(i=1;i<=5;i++)
		printf("Sr.no.::(%d)   R.No.::%d    Name::%s   Marks:: %f\n",i,n[i].r,n[i].n,n[i].f);
}
