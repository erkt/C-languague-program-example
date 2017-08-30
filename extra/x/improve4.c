//#include<stdio.h>
#define m(x,y) ((x)>(y))?(x):(y);
#define m(x,y) ((x)<(y))?(x):(y);
int main(){
int i=10,j=5,k=0;
k=m(++i,j++);
printf("%d  %d  %d\n",i,j,k);
return 0;
}
