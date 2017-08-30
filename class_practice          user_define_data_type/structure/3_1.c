#include<stdio.h>
#include<string.h>
struct biodata
{
	int r;
	float f;
};
typedef struct biodata b;
main()
{
	b a[5],b;
	int i,c,j;
	for (i=0;i<5;i++)
	{
		printf("R.no::");
		scanf("%d",&a[i].r);
		printf("Marks:");
		scanf("%f",&a[i].f);
		printf("\n");
	}

loop:		printf("Choose option::\n 1)R.no.shorting\n 2)Marks shorting\n '0' for EXIT\n ");
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
						if(a[j].f > a[j+1].f)
						{
							b=a[j];
							a[j]=a[j+1];
							a[j+1]=b;
						}			
				break;
			default:
				goto loop;
		}

		for (i=0;i<5;i++)
			printf("\tR.no::%d \tMarks::%f\n",a[i].r,a[i].f);

}


