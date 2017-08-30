#include<stdio.h>
struct one
{
	int i;
	char c[20];
	float f;
}a[5];

main(int s,char**v)
{
	int i;
	FILE *f;
	if(s==2)
	{
	for(i=0;i<5;i++)
	{
		printf("Enter the Name::");
		scanf("%s",a[i].c);
		printf("Enter Roll number::");
		scanf("%d",&a[i].i);
		printf("Enter Marks::");
		scanf("%f",&a[i].f);
	}
	f=fopen(v[1],"w");
	fwrite(&a,sizeof(a),1,f);
	}
	else
	printf("Usage:: ./a.out record..\n");
}



