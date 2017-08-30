//7) Write a Program to copy the one file into multiple destination files which are provided during the loadtime.
#include<stdio.h>
#include<stdlib.h>
main(int argc,char **argv)
{
	if(argc<2)
	{
		printf("Usage:: ./a.out Source_File_name Des_File_name1 Des_File_name2...upto n\n");
		return;
	}
	FILE *sf,*df;
	char *p,ch;
	int i,j,k,maxchar;
	sf=fopen(argv[1],"r");
	if(sf==0)
	{
		printf("%s FILE is not present in Directory\n",argv[1]);
		return;
	}
	while((ch=fgetc(sf))!=EOF)
	{
		k++;	
		if(ch=='\n')
		{	
			if(maxchar<k)
				maxchar=k;
			k=0;
		}		
	}
	p=malloc(maxchar+1);
	for(i=2;i<argc;i++)
	{

		rewind(sf);
		df=fopen(argv[i],"w");
		if(df==0)
		{
			printf("%s FILE is not Open Successfully\n",argv[i]);	
			return;
		}
		while((fgets(p,maxchar+1,sf))!=NULL)
			fputs(p,df);
		fclose(df);
		printf("%s FILE is Copied into %s FILE..\n",argv[1],argv[i]);
	}
	fclose(sf);
	printf("All file Copied Successfully..\n");
}
