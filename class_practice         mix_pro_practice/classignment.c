/////enter roll number,,,name,,,,,marks,,,,,,,,,and shorting
#include<stdio.h>
int srcm(char *d,char *s)
{
	int i;
	for(i=0;s[i];i++)
		if(d[i]!=s[i])
			break;
	if(d[i]>s[i])
		return 1;
	else
		return 0;
}
void cp(char *d,char*s)
{
	int i;
	for(i=0;s[i];d[i]=s[i],i++);
	d[i]=s[i];
}
main()
{
	int rollnu[5],i,n,j,p,k,t1;
	char name[5][20],t[20];
	float marks[5],t2;
	for(i=0;i<5;i++)
	{
		printf("Enter R.No.::");
		scanf("%d",&rollnu[i]);
		printf("Enter Name::");
		scanf(" %[^\n]",name[i]);
		printf("Enter marks::");
		scanf("%f",&marks[i]);
		printf("\n\n");
	}
	for(i=0;i<5;printf("Roll number::%d  Name::%s  Marks::%f\n",rollnu[i],name[i],marks[i]),i++);
	printf("\n\t\tchoose option::\n\t\t(1) Roll number short.\n\n\t\t(2) Name short.\n\n\t\t(3)Marks.\n\n");
	scanf("%d",&n);
	switch(n)
	{
		case 1:
			for(i=0;i<4;i++)                            ///////for PIC 2 start .....
			{
				for(j=0;j<4-i;j++)
					if(rollnu[j]>rollnu[j+1])
					{
						t1=rollnu[j];
						rollnu[j]=rollnu[j+1];
						rollnu[j+1]=t1;
						cp(t,name[j]);
						cp(name[j],name[j+1]);
						cp(name[j+1],t);
						t2=marks[j];
						marks[j]=marks[j+1];
						marks[j+1]=t2;
					}
			}
			break;
		case 2:
			for(i=0;i<4;i++)
			{
				for(j=0;j<4-i;j++)
				{
					p=srcm(name[j],name[j+1]);
					if(p>0)
					{
						cp(t,name[j]);
						cp(name[j],name[j+1]);
						cp(name[j+1],t);
						t1=rollnu[j];
						rollnu[j]=rollnu[j+1];
						rollnu[j+1]=t1;
						t2=marks[j];
						marks[j]=marks[j+1];
						marks[j+1]=t2;
					}
				}
			}
			break;
		case 3:
			for(i=0;i<4;i++)                 ///for PIC 2 end
			{
				for(j=0;j<4-i;j++)
					if(marks[j]>marks[j+1])
					{
						t2=marks[j];
						marks[j]=marks[j+1];
						marks[j+1]=t2;
						t1=rollnu[j];
						rollnu[j]=rollnu[j+1];
						rollnu[j+1]=t1;
						cp(t,name[j]);
						cp(name[j],name[j+1]);
						cp(name[j+1],t);
					}
			}
			break;
		default:
			printf("proper input..\n");
			break;
	}
	for(i=0;i<5;printf("Roll number::%d  Name::%s  Marks::%f\n",rollnu[i],name[i],marks[i]),i++);
}
