//6) Write a Program to replace the word with the reverse of that word in a given file.
#include<stdio.h>
main(int argc,char**argv)
{
	if(argc!=2)
	{
		printf("Usage:: ./a.out F_name\n");
		return;
	}
	FILE *fp;
	char ch[100],c;
	int i,j,k;
	if((fp=fopen(argv[1],"r+"))==NULL)
	{
		printf("%s FILE is not present\n",argv[1]);
		return;
	}
	
	while((fscanf(fp,"%s",ch))!=EOF)
	{
		for(k=0;ch[k];k++);
			
		for(i=0,j=k-1;i<j;i++,j--)
			{
				c=ch[i];
				ch[i]=ch[j];
				ch[j]=c;
			}
		fseek(fp,-(k),SEEK_CUR);
		fprintf(fp,"%s",ch);		
	}
}




