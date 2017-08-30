#include<stdio.h>
main(){
int len,len1,**p,i;
scanf("%d %d",&len,&len1);
p=malloc(sizeof(int)*len);
for(i=0;i<len;i++)
p[i]=malloc(sizeof(int)*len1);


printf("%d %d\n",sizeof(p),sizeof(p[0]) );
}
