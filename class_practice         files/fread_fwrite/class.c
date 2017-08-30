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
	if(a!=3)
	{
		printf("Usage:: ./a.out  data_file_name   shorting_file_name\n");
		return;
	}
	
		fp=fopen(v[1],"r");
		if(fp==0)
		{
			printf("%s is not present..\n",v[1]);
			return;
		}

		fread(&b,sizeof(b),1,fp);
		for(j=0;j<5;j++)
			printf("Name::%s\t R.no::%d\t Mark::%f\n",b[j].n,b[j].i,b[j].f);
		printf("- - - - - - - -  - - - -  -  - -  - - - - - -  -\n");
		printf("Choose option for shorting of DATA according::\n(1)Roll number.\n(2)Name.\n(3)Marks.\n(0)Exit\n");
		scanf("%d",&n);
		switch(n)	
		{
			case 0:return 0;
			case 1:
			       for(i=0;i<5-1;i++)
				       for(j=0;j<5-1-i;j++)
					       if(b[j].i>b[j+1].i)
					       {
						       t=b[j];
						       b[j]=b[j+1];
						       b[j+1]=t;
					       }
			       break;
			case 2:
			       for(i=0;i<5-1;i++)
				       for(j=0;j<5-1-i;j++)
					       if(strcmp(b[j].n,b[j+1].n)==1)
					       {
						       t=b[j];
						       b[j]=b[j+1];
						       b[j+1]=t;
					       }
			       break;
			case 3:
			       for(i=0;i<5-1;i++)
				       for(j=0;j<5-1-i;j++)
					       if(b[j].f>b[j+1].f)
					       {
						       t=b[j];
						       b[j]=b[j+1];
						       b[j+1]=t;
					       }
			       break;
			default:
			       printf("Choose propre input..\n");
		}
		fd=fopen(v[2],"w");
		fwrite(&b,sizeof(b),1,fd);
}
