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
		f=fopen(v[1],"r");
		if(f!=0)
		{
			fread(&a,sizeof(a),1,f);
			for(i=0;i<5;i++)
			{
				printf("Name::%s\tRoll Number::%d\tMarks:: %f\n",a[i].c,a[i].i,a[i].f);
			}
		}
		else
			printf("%s is not present..\n",v[1]);
	}
	else
		printf("Usage:: ./a.out  record..\n");
}


