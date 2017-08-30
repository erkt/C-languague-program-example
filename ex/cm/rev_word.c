#include<stdio.h>
main(){
char c[100];
int i,j,l,k=0;
printf("Enter the string..\n");
scanf("%[^\n]",c);
for(i=0;c[i];i++){
if(c[i]==' '||c[i+1]=='\0'){
if(c[i+1]=='\0') i++;
for(j=i-1;j>k;j--,k++)//{char temp=c[k];c[k]=c[j];c[j]=temp;
//}
c[j]=c[j]+c[k]-(c[k]=c[j]);
k=i+1;
}
}
printf("DATA:: %s \n",c);
}
