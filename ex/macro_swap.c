#include<stdio.h>
#define big(x,y) x>y?x:y
#define swap(x,y) temp=y;y=x;x=temp;
main(){
int a=5,b=8,temp=0;
if(a>big(a,b))
swap(a,b);
printf("%d %d \n",a,b);
}
