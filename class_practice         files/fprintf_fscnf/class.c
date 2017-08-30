//////shorting of 5 student
#include<stdio.h>
typedef struct d
{
	char n[20];
	int i;
	float f;
}s;
main(int a,char**v)
{
	int i,n,j;
	s b[5],t;
	FILE *fp,*fd;
	if(a==3)
	{
		fp=fopen(v[1],"r");
		if(fp!=0)
		{

			for(i=0;i<5;i++)
				fscanf(fp,"%s %d %f",b[i].n,&b[i].i,&b[i].f);
/*			for(i=0;i<5;i++)
				printf("%s %d %f\n",b[i].n,b[i].i,b[i].f);
			printf("- - - - - - - -  - - - -  -  - -  - - - - - -  -\n");
*/			printf("Choose option for shorting of DATA according::\n(1)Roll number.\n(2)Name.\n(3)Marks.\n(0)Exit\n");
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
/*			for(i=0;i<5;i++)
				printf("%s %d %f\n",b[i].n,b[i].i,b[i].f);
			printf("- - - - - - - -  - - - -  -  - -  - - - - - -  -\n");
*/			fd=fopen(v[2],"w");
			fprintf(fd,"Name \tR.No. \tMarks\n");
			for(i=0;i<5;i++)
				fprintf(fd,"%s \t%d \t%f\n",b[i].n,b[i].i,b[i].f);
		}
		else
			printf("%s is not present..\n",v[1]);
	}
	else
		printf("Usage:: ./a.out  data_file_name   shorting_file_name\n");
}
