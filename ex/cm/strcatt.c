#include<stdio.h>
#include<stdlib.h>
char* str(char *p, char *q){
	char *w;
	int i,j;
	w= malloc(1000);
	for(i=0;p[i];i++)w[i]=p[i];
	for(j=0,i;q[j];j++)w[i++]=q[j];
	return w;
}
main(){
char c[100],v[100],*g;
printf("::");
scanf("%s %s",c,v);
g=malloc(200);
g=str(c,v);
printf("%s\n",g);
}
