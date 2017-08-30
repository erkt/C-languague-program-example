#include<stdio.h>
int main(){
int a=90,b;
float l;
printf("%d %d %f\n",a,b,l);
b=a;
l=a;
printf("implict::%d %d %f\n",a,b,l);
b=(float)a;
printf("explict::%d %f %f\n",a,(float)b,l);
return 0;}
