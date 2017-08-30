#include<stdio.h>
int rev(int n){
int i;
while(n){
i=i*10+(n%10);
n/=10;
}
return i;
}
main(){
int n;
scanf("%d",&n);
n=rev(n);
printf("%d\n",n);
}
