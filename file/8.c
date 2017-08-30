//8) Write a Program to replace the perticular word with another word ( can be any length ) in a given file.
#include<stdio.h>
#include<stdlib.h>
main(int argc,char**argv)
{
	if(argc!=4)
	{
		printf("Usage:: ./a.out F_name Word Replace_word.\n");
		return;
	}
	FILE *sf;
	char *p,ch[100],cq;
	int i,j,l,k,l1;
	sf=fopen(argv[1],"r");
	if(sf==0)
	{
		printf("%s File is nopt present\n",argv[1]);
		return;
	}
	fseek(sf,0,SEEK_END);
	l=ftell(sf);////sizeof file
	p=malloc(sizeof(int )*l);///mameory allocating according sizeof file
	rewind(sf);
	i=0;
	while((fscanf(sf,"%s",ch))!=EOF)////fatched word by word
	{
		cq=fgetc(sf);////take after word space or newline 
		fseek(sf,-1,SEEK_CUR);////back one position back taking other word
		if((strcmp(ch,argv[2]))==0)////comapre word with find word
		{
			for(k=0;argv[3][k];k++,i++)///if find then  replace here in DMA memory
				p[i]=argv[3][k];
			if(cq==' ')	// after word if space is there put spce ans if new line then new line
				p[i++]=' ';
			else if(cq=='\n')
				p[i++]='\n';
			continue;
		}
		for(j=0;ch[j];j++)  ///if not find it will put in DMA memory
			p[i++]=ch[j];
		if(cq==' ')   // after word if space is there put spce ans if new line then new line
			p[i++]=' ';
		else if(cq=='\n')
			p[i++]='\n';
	}
	fclose(sf);////close that file
	sf=fopen(argv[1],"w");///again open file in write mode
	fputs(p,sf);////put whole string in file 
}
