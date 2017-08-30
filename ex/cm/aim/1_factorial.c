#include<stdio.h>
int fac(int m){
int i=1;
while(m)
i*=m--;
return i;
}
int fac_re(int m){
static i=1;
if(m){
i*=m;
fac_re(--m);
}
else
return i;
}
main(){
int n,m;
scanf("%d",&n);
m=fac(n);
printf("%d\n",m);
m=fac_re(n);
printf("%d\n",m);
}
