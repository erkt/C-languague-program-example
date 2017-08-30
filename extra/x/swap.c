#include<stdio.h>
int main(){
int x=10,y=20;
printf("%d  %d\n",x,y);
x^=y^=x^=y;
printf("%d  %d\n",x,y);
}
