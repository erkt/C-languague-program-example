#include<stdio.h>
main(){
	char c[10];
	int g=0,i,j;
	printf("enter numeric string..");
	scanf("%s",c);
	for(i=0;c[i];i++)
		g=(g*10)+(c[i]-48);
	printf("%d\n",g);
}
