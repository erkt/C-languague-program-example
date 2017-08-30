#include<stdio.h>
#include<string.h>
typedef struct date
{
	int dd;
	int mm;
	int yy;
}DATE;
struct biodata
{
	int r;
	char n[20];
	float f;
	DATE dob,doj;
};
typedef struct biodata DATA;
main()
{
	DATA a[5],b;
	int i,c,j;
	for (i=0;i<5;i++)
	{
		printf("R.no::");
		scanf("%d",&a[i].r);
		printf("Name::");
		scanf("%s",a[i].n);
		printf("Marks:");
		scanf("%f",&a[i].f);
		printf("Enter Birthday in formate::DD/MM/YYYY:::");
		scanf("%d %d %d",&a[i].dob.dd,&a[i].dob.mm,&a[i].dob.yy);
		printf("Enter joining date in formate::DD/MM/YYYY:::");
		scanf("%d %d %d",&a[i].doj.dd,&a[i].doj.mm,&a[i].doj.yy);
		printf("\n");
	}
//	while(1)
	{
		printf("Choose option::\n 1)R.no.shorting\n 2)Name shorting\n 3)Marks shorting\n '0' for EXIT\n ");
		scanf("%d",&c);
		switch(c)
		{
			case 0:
				return;
			case 1:
				for(i=0;i<5;i++)
					for(j=0;j<5-i-1;j++)
						if(a[j].r > a[j+1].r)
						{
							b=a[j];
							a[j]=a[j+1];
							a[j+1]=b;
						}			
				break;	
			case 2:
				for(i=0;i<5;i++)
					for(j=0;j<5-i-1;j++)
						if(strcmp(a[j].n , a[j+1].n)>0)
						{
							b=a[j];
							a[j]=a[j+1];
							a[j+1]=b;
						}			
				break;
			case 3:
				for(i=0;i<5;i++)
					for(j=0;j<5-i-1;j++)
						if(a[j].f > a[j+1].f)
						{
							b=a[j];
							a[j]=a[j+1];
							a[j+1]=b;
						}			
				break;
			KT:
				printf("Read and choose option...\n");
				break;

		}
		
	}
	for (i=0;i<5;i++)
		printf("\tR.no::%d \t Name::%s \tMarks::%f \tBirthday::%d.%d.%d \tjoining date::%d.%d.%d\n",a[i].r,a[i].n,a[i].f,a[i].dob.dd,a[i].dob.mm,a[i].dob.yy,a[i].doj.dd,a[i].doj.mm,a[i].doj.yy);
}



