#include<stdio.h>
main(){
	int i,j,wc=1,w=1;
	char c[1000];
	printf("enter the string...\n");
	scanf("%[^\n]",c);
	for(i=0;c[i];i++)
	if(c[i]==' '){
	for(;c[i]==' ';i++);
		wc++;
	}

	for(i=0;c[i];i++){
		if(c[i]!=' ')			
			continue;
		else{
			if(c[i+1]!=' ')
			w++;
			if(w==1||wc-1==w)
			if(c[i]==' '&&c[i+1]==' '){
				for(j=i;c[j];j++)c[j]=c[j+1];
				i--;
			}		
		}
	}
	printf("%s\n",c);
}
