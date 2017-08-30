#include<stdio.h>
main(){
int n,n1;
scanf("%d %d",&n,&n1);
printf("%d %d\n",n,n1);
n=n+n1-(n1=n);
printf("%d %d\n",n,n1);
}
