//////shorting of 5 student
#include<stdio.h>
struct d
{
	int i;
	char n[20];
	float f;
}b[5];
main(int a,char**v)
{
	int i,n,j;
	struct d t;
	FILE *fp,*fd;
	if(a==3)
	{
		fp=fopen(v[1],"r");
		if(fp!=0)
		{
			fread(&b,sizeof(b),1,fp);
			for(j=0;j<5;j++)
			{	
				printf("Name::%s\t R.no::%d\t Mark::%f\n",b[j].n,b[j].i,b[j].f);
			}	
				printf("- - - - - - - -  - - - -  -  - -  - - - - - -  -\n");
		}
			else
				printf("%s is not present..\n",v[1]);
	
	}
	else
		printf("Usage:: ./a.out  data_file_name   shorting_file_name\n");
}
