#include<stdio.h>
main(int argv,char **argc){
	if(argv==2){
		char ch;
		FILE *fd;
		if((fd=fopen(argc[1],"r"))<0){
			perror("OPEN");
			return;
		}
		perror("OPEN");
		while((ch=fgetc(fd))!=EOF){
			printf("%c",ch);
		}
	}
}
