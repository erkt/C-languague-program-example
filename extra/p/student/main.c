#include"data.h"
main(int argc,char **argv)
{
char ch;
int ret;
st *hptr=0;
	if(argc!=2)
	{
		printf("Usage:: ./student DATABASE_FILE...\n");
		return;
	}
	while(1)
	{
		printf(" \ta/A : Add New record\n \td/D : delete record\n \ts/S : Show the list\n \tm/M : modify a record\n \tv/V : save\n \te/E : exit\n \tt/T : sort the list\n \tr/R : reverse the list\n \tEnter your choice:: \n");
		scanf(" %c",&ch);
	
		if(ch=='a'||ch=='A')
		{
			ret=end(&hptr);
		}
		else if(ch=='d'||ch=='D')
		{

		}
		else if(ch=='s'||ch=='S')
		{
			char c;
			printf("Display from File or Temp..(y/n)\n");
			scanf(" %c",&c);
			if((c=='y')||(c=='Y'))
			{
			int f=filedata(argv[1]);
			if(f<0)
			printf("file is not present..\n");			
			}
			else
				ret=display(hptr);
			if(ret)printf("Successfully printed..\n");else printf("Not printed..\n");	
			
		}
			else if(ch=='m'||ch=='M'){}
			else if(ch=='v'||ch=='V'){ret=save(hptr,argv[1]);if(ret)printf("Successfully Saved..\n");else printf("Data not saved..\n");}
			else if(ch=='e'||ch=='E'){printf("done!!\n");exit(0);}
			else if(ch=='t'||ch=='T'){ret=sort(&hptr,argv[1]);if(ret)printf("successfully sorted..\n");else printf("Data not sorted..\n");}
			else if(ch=='r'||ch=='R'){ret=rev(&hptr);if(ret)printf("Successfully reversed...\n");else printf("Data not reverse..\n");}
			else printf("unkown option\n");
	}
}

