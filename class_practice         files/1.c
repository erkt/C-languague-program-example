#include<stdio.h>
main(int argc,char **argv)
{
	char c[20],c1;
	FILE *fp;
	int p;




/*

	//fp=fopen("data","r");  ///complie time inpui
*	printf("File name::");//run time input
		scanf("%s",c);
		fp=fopen(c,"r");
	 */	if(argc!=2)
	printf("Usage:: ./a.out filename...\n");
	else
	{
		fp=fopen(argv[1],"r");
		if(fp==0)
printf("file is not present\n");
		else
			{
		while((c1=fgetc(fp))!=EOF)
		{
			p=ftell(fp);
			printf("%d  ",p);
		}
		rewind(fp);
			printf("\nrewind::::%d  ",ftell(fp));
	}}
}
