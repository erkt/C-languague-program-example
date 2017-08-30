#include<stdio.h>
float roun(float n){
int j,k;
float h;
j=n;
printf("%d\n",j);
h=(n-j)*1000;

printf("%f\n",h);
k=h;
if((k%10)>5)
h=h+10;
h=h/1000;
n=j+h;
printf("%f\n",n);
return n;
}
main(){
float m;
scanf("%f",&m);
m=roun(m);
printf("%f\n",m);
}
