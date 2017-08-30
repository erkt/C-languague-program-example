//#include<stdio.h>
//#define sp(a,b,c) (c t;t=a,a=b,b=t;)
//#define sp(a,b,c) c t;t=a,a=b,b=t;
#define sp(a,b,c) c t;t=a,a=b,b=t;
int main(){
int x=10,y=20;
int *p,*q;
//sp(x,y,int);
p=&x;q=&y;
sp(p,q,int *);
printf("%d  %d \n",x,y);
}
