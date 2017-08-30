#include<stdio.h>
main(){
	char c[100],c1[100],c2[200];
	int i,j;
	scanf("%[^\n]",c);
	scanf(" %[^\n]",c1);
	for(i=0;c[i];i++)
		c2[i]=c[i];
	for(j=0;c1[j];j++)
		c2[i++]=c1[j];
	printf("%s\n",c2);
}
