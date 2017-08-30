#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct biodata
{
	int r;
	float f;
};
typedef struct biodata b;
main()
{
	b **a,*t;
	int i,c,j,n;
	printf("enter the student no::");
	scanf("%d",&n);
	a=malloc(sizeof(struct biodata*)*n);
	for (i=0;i<n;i++)
		a[i]=malloc(sizeof(struct biodata));
	for (i=0;i<n;i++)
	{
		printf("R.no::");
		scanf("%d",&a[i]->r);
		printf("Marks:");
		scanf("%f",&a[i]->f);
		printf("\n");
	}

loop:		printf("Choose option::\n 1)R.no.shorting\n 2)Marks shorting\n '0' for EXIT\n ");
		scanf("%d",&c);
		switch(c)
		{
			case 0:
				return;
			case 1:
				for(i=0;i<n;i++)
					for(j=0;j<n-i-1;j++)
						if(a[j]->r > a[j+1]->r)
						{
							t=a[j];
							a[j]=a[j+1];
							a[j+1]=t;
						}			
				break;	
			case 2:
				for(i=0;i<n;i++)
					for(j=0;j<n-i-1;j++)
						if(a[j]->f > a[j+1]->f)
						{
							t=a[j];
							a[j]=a[j+1];
							a[j+1]=t;
						}			
				break;
			default:
				goto loop;
		}

		for (i=0;i<n;i++)
			printf("\tR.no::%d \tMarks::%f\n",a[i]->r,a[i]->f);

}


