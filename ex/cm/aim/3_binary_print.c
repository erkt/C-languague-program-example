#include<stdio.h>
void bin(int m){
int i;
for(i=31;i>=0;i--)
printf("%d",m>>i&1);
printf("\n");
}
main(){
int n;
scanf("%d",&n);
bin(n);
}
