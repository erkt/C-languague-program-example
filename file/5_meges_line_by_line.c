// Write a Program to meges  lines from two files and store the result into another file.
#include<stdio.h>
main(int argc,char **argv)
{
	FILE *sf,*sf1,*df;
	char p[100],p1[100];
	if(argc!=4)
	{
		printf("Usage:: ./a.out s1_name s2_name dest_f_name..\n");
		return;
	}
	sf=fopen(argv[1],"r");
	sf1=fopen(argv[2],"r");
	df=fopen(argv[3],"w");
	if(sf==0||sf1==0||df==0)
	{
		printf("%s or %s or %s is not present..\n",argv[1],argv[2],argv[3]);
		return;
	}
	while(((fgets(p,100,sf))!=NULL)&&((fgets(p1,100,sf1))!=NULL))
	{
		fputs(p,df);
		fputs(p1,df);
	}
	if(sf==0)
		fclose(sf);
	else
		while((fgets(p,100,sf))!=NULL)
			fputs(p,df);
	if(sf1==0)
		fclose(sf1);
	else
		while((fgets(p1,100,sf1))!=NULL)
			fputs(p1,df);
	fclose(df);
	printf("file meges...\n");
}
